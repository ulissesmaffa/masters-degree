/*****************************************************************************

  The following code is derived, directly or indirectly, from the SystemC
  source code Copyright (c) 1996-2006 by all Contributors.
  All Rights reserved.

  The contents of this file are subject to the restrictions and limitations
  set forth in the SystemC Open Source License Version 2.4 (the "License");
  You may not use this file except in compliance with such restrictions and
  limitations. You may obtain instructions on how to receive a copy of the
  License at http://www.systemc.org/. Software distributed by Contributors
  under the License is distributed on an "AS IS" basis, WITHOUT WARRANTY OF
  ANY KIND, either express or implied. See the License for the specific
  language governing rights and limitations under the License.

 *****************************************************************************/

/*****************************************************************************

  simple_fifo.cpp -- Simple SystemC 2.0 producer/consumer example.

                     From "An Introduction to System Level Modeling in
                     SystemC 2.0". By Stuart Swan, Cadence Design Systems.
                     Available at www.systemc.org

  Original Author: Stuart Swan, Cadence Design Systems, 2001-06-18

 *****************************************************************************/

/*****************************************************************************

  MODIFICATION LOG - modifiers, enter your name, affiliation, date and
  changes you are making here.

      Name, Affiliation, Date:
  Description of Modification:

 *****************************************************************************/

#include <systemc.h>

/* Interface */
class write_if : virtual public sc_interface{
  public:
    virtual void write(char) = 0;
    virtual void reset() = 0;
};

class read_if : virtual public sc_interface {
  public:
    virtual void read(char &) = 0;
    virtual int num_available() = 0;
};

/* Channel */
class fifo : public sc_channel, public write_if, public read_if {
  public:
    // Construtor
    fifo(sc_module_name name) : sc_channel(name), num_elements(0), first(0) {}
    // Processes
    void write(char c) {
      if (num_elements == max)
        wait(read_event);

      data[(first + num_elements) % max] = c;
      ++ num_elements;
      write_event.notify();
    }

    void read(char &c){
      if (num_elements == 0)
        wait(write_event);

      c = data[first];
      -- num_elements;
      first = (first + 1) % max;
      read_event.notify();
    }

    void reset() { num_elements = first = 0; }

    int num_available() { return num_elements;}

  private:
    //Definições e componentes da FIFO
    enum e { max = 10 }; //tamanho máximo da FIFO
    char data[max]; //buffer de dados
    int num_elements, first; //rastreamento do número de elementos e o primeiro
    sc_event write_event, read_event; //eventos usados para sincronização
};

/* Producer */
/* Módulo que gera dados. Escreve na FIFO através de uma porta que 
implementa a interface "write_if"*/
class producer : public sc_module{
  public:
    //Ports: interfaces de comunicação do módulo
    sc_port<write_if> out;

    //Processes: ação executadas durante a simulação
    SC_HAS_PROCESS(producer);

    void main(){
      const char *str="Visit www.systemc.org and see what SystemC can do for you today!\n";

      while (*str)
        out->write(*str++);
    }

    //Constructor: inicializa o módulo e registra os processos
    producer(sc_module_name name) : sc_module(name){
      SC_THREAD(main);
    }
};

/* Consumer */
/* Módulo que consome dados*/
class consumer : public sc_module{
  public:
    //Ports
    sc_port<read_if> in;

    //Processes
    SC_HAS_PROCESS(consumer);

    void main(){
      char c;
      cout << endl << endl;

      while (true) {
        in->read(c);
        cout << c << flush;

        if (in->num_available() == 1)
    cout << "<1>" << flush;
        if (in->num_available() == 9)
    cout << "<9>" << flush;
      }
    }

    //Constructor
    consumer(sc_module_name name) : sc_module(name){
      SC_THREAD(main);
    }
};

/* Top */
class top : public sc_module {
  public:
    // Modules
    fifo *fifo_inst;
    producer *prod_inst;
    consumer *cons_inst;

    top(sc_module_name name) : sc_module(name){
      // Cria instâncias
      fifo_inst = new fifo("Fifo1");
      prod_inst = new producer("Producer1");
      cons_inst = new consumer("Consumer1");

      // Conecta os módulos
      prod_inst->out(*fifo_inst);      
      cons_inst->in(*fifo_inst);
    }
};

/* Main */
int sc_main (int argc , char *argv[]) {
   top top1("Top1");
   //Run the simulation
   sc_start();
   return 0;
}