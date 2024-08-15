#include <systemc.h>

/* Interface */
class write_if : public sc_interface {
    public:
        virtual void write(char) = 0;
        virtual void reset() = 0;
};

class read_if : public sc_interface {
    public:
        virtual void read(char &) = 0;
        virtual int num_available() = 0;
};

/* Channel */
class fifo : public sc_channel, public write_if, public read_if {
    public:
        fifo() : num_elements(0), first(0) {}
        
        void write(char c) {
            if (num_elements == max_elements)
            wait(read_event);
            data[ (first + num_elements) % max_elements ] = c;
            ++ num_elements;
            write_event.notify();
        }
        
        void read(char& c) {
            if (num_elements == 0)
            wait(write_event);
            c = data[first];
            -- num_elements;
            first = (first + 1) % max_elements;
            read_event.notify();
        }

        void reset() { num_elements = first = 0; }
        
        int num_available() { return num_elements; }
        
    private:
        enum e { max_elements = 10 }; // just a constant
        char data[max_elements];
        int num_elements, first;
        sc_event write_event, read_event;
};

/*  Producer */
class producer : public sc_module {
    public:
        sc_port<write_if> out; // the producer's output port
        SC_CTOR(producer){ // the module constructor
            SC_THREAD(main); // start the producer process
        }
        
        void main(){ // the producer process
            char c;
            while (true) {
                ...
                out->write(c); // write c into the fifo
                if (...){

                }
                out->reset(); // reset the fifo
            }
        }
};

/* Consumer */
class consumer : public sc_module{
    public:
        sc_port<read_if> in; // the consumer's input port

        SC_CTOR(consumer){ // the module constructor
            SC_THREAD(main); // start the consumer process
        }

        void main(){ // the consumer process
            char c;
            while (true) {
                in->read(c); // read c from the fifo
                if (in->num_available() > 5){
                ...; // perhaps speed up processing
                }
            }
        }
};

/* TOP */
class top : sc_module {
    public:
        fifo fifo_inst; // a fifo instance
        producer *producer_inst; // a producer instance
        consumer *consumer_inst; // a consumer instance

        SC_CTOR(top){ // the module constructor
            producer_inst = new producer("Producer1");
            // bind the fifo to the producer's output port
            producer_inst->out(fifo_inst);
            consumer_inst = new consumer("Consumer1");
            // bind the fifo to the consumer's input port
            consumer_inst->in(fifo_inst);
        }
};