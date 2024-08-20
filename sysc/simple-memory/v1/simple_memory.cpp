#include <systemc.h>

/* Interface */
class memory_if : public sc_interface{
   public:
      virtual int read(int addr) = 0;
      virtual void write(int addr, int data) = 0;
};

/* Channel */
class memory_channel : public sc_module, public memory_if{
   public:
      // Contructor
      SC_CTOR(memory_channel){

      }

      // Implementation of the interface functions
      int read(int addr){
         if(addr>255||addr<0){
            std::cout << "addr must be between 0 and 255" << std::endl;
            return -1;
         }
         else{
            return mem[addr];
         }
      }

      void write(int addr, int data){
         if(addr>255||addr<0){
            std::cout << "addr must be between 0 and 255" << std::endl;
         }
         else{
            mem[addr] = data;
         }
      }

   private:
      // Model of our
      int mem[256];   
};

/* Module */
struct MemoryIFTest : public sc_module {
   // Ports
   sc_in<bool> clock;
   sc_port<memory_if> memory;
   // Processes
	void test_stim(){
      int addr;
      int data;
      int m_data;
      // Generate a random address and data
      addr=123;
      data=10;
      // Write the data into the memory
      std::cout<<"Writing memory address = "<<addr<<" data="<<data<<std::endl;
      memory->write(addr,data);
      // Read the data into de memory
      m_data=memory->read(addr);
      if(m_data!=data){
         std::cout<<"Error with data"<<std::endl;
      }else{
         std::cout<<"Read memory address="<<addr<<" data="<<m_data<<std::endl;
      }

      //wait();
   }
	// Constructor
   SC_CTOR(MemoryIFTest){
      SC_THREAD(test_stim);
      sensitive << clock.pos();
   }
	}; 

/* Main */
int sc_main (int argc , char *argv[]) {
   // Modules
   MemoryIFTest t1("mem_test");
   memory_channel mem1("memory");

   // CLK signal
   sc_clock clk("clk",10,SC_NS,0.5);

   // Connect the modules
   t1.clock(clk);
   t1.memory(mem1);

   // Run the simulation
   sc_start(50, SC_NS);

   return 0;
}