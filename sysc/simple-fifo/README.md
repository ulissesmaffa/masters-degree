# Simple-FIFO

A implementação do simple-fifo tem como objetivo demonstrar o funcionamento do Transaction-Level Modeling (TLM). Nesse exemplo, um produtor insere dados em um buffer FIFO, enquanto um consumidor lê esses dados, com a sincronização sendo gerenciada por eventos. Este exemplo clássico ilustra como modelar sistemas concorrentes em SystemC, utilizando a comunicação eficiente por meio de canais.

1. Interfaces write_if e read_if

   Essas são interfaces abstratas (definidas como classes puras) que estabelecem os métodos que os canais devem implementar.
   * write_if: Declara os métodos write(char) e reset().
   * read_if: Declara os métodos read(char &) e num_available().
   
   Essas interfaces permitem que diferentes módulos (neste caso, o producer e o consumer) interajam com o canal FIFO sem precisar saber os detalhes de implementação do canal.

2. Classe fifo

   A classe fifo é a implementação do canal FIFO, que herda de sc_channel e implementa as interfaces write_if e read_if.

   * Atributos privados:
      * max: Define o tamanho máximo do FIFO (10 elementos).
      * data[max]: Armazena os dados do FIFO.
      * num_elements: Conta o número de elementos presentes no FIFO.
      * first: Aponta para o primeiro elemento do FIFO.
      * write_event e read_event: São eventos que os métodos write e read usam para sincronização.
   * Método write(char c):
      * Escreve um caractere c no FIFO. Se o FIFO estiver cheio (num_elements == max), o processo espera (wait(read_event)) até que haja espaço disponível.
      * Após adicionar o caractere, o contador num_elements é incrementado e o evento write_event é notificado para que processos esperando para ler saibam que há dados disponíveis.
   * Método read(char &c):
      * Lê um caractere do FIFO. Se o FIFO estiver vazio (num_elements == 0), o processo espera (wait(write_event)) até que haja dados disponíveis.
      * Após a leitura, o contador num_elements é decrementado, e o evento read_event é notificado para que processos esperando para escrever saibam que há espaço disponível.
   * Método reset():
      * Reseta o FIFO, limpando os dados ao redefinir num_elements e first para zero.
   * Método num_available():
      * Retorna o número de elementos presentes no FIFO.

3. Classe producer

   O produtor (producer) escreve dados no FIFO através do método write.
   Método main():
   * Escreve a string "Visit www.systemc.org..." caractere por caractere no FIFO usando out->write(*str++).

4. Classe consumer
   
   O consumidor (consumer) lê dados do FIFO e os exibe na saída padrão.
   Método main():
      * Lê os caracteres do FIFO usando in->read(c) e os imprime.
      * Também imprime <1> e <9> quando o número de elementos no FIFO é 1 ou 9, respectivamente, mostrando a capacidade do FIFO em tempo real.

5. Classe top

   A classe top instancia o FIFO, o produtor e o consumidor, conectando o produtor ao FIFO e o consumidor ao FIFO.

6. Função sc_main

   A função principal (sc_main) cria uma instância do módulo top e inicia a simulação.