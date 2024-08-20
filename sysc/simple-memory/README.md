# Sobre a Organização
 
1. V1: Descrição de uma memória simples sem separação dos arquivos;
2. V2: Descrição de uma memória simples com separação dos arquivos.

# Resumo sobre Canais Hierárquicos em SystemC

Essa organização pode ser observada em V2. V1 implementa uma memória simples também, mas tudo em apenas um arquivo. Abaixo, é descrito um resumo acerca de cada parte da memória.

1. Interface (memory_if.h) - Contrato para Interação com o Hardware

   * O que é em hardware: a interface memory_if define o que pode ser feito com o hardware, como ler ou escrever em uma determianda posição de memória. No mundo real, isso seria como os sinais de controle e de dados como é visto em um "datasheet".

2. Canal (memory_channel.h e memory_channel.cpp) - Implementação da Memória

   * O que é em hardware: é o coração do hardware, onde é construído o comportamento interno da memória. No mundo físico, isso seria como a lõgica interna do chip que gerencia como os dados são armazenados e recuperados a partir das células de memória. O Array mem[255] no código seria análogo às células de memória reais no chip, onde os bits são armazenados. 
   * Por que é chamado de "Canal"?: Em SystemC, o termo "canal" é usado para descrever um componente que gerencia a comunicação de dados entre módulos. Neste contexto, memory_channel é a implementação do "hardware" que gerencia o armazenamento e a recuperação de dados.

3. Módulo de Teste (memoryiftest.h e memoryiftest.cpp) - Testando o Hardware

   * O que é em hardware: no mundo real, é semelhante ao processo de verificação e validação de um chio antes de ser fabricado.
   * O módulo MemoryIFTest é como um sistema de teste que gera diferentes condições de uso para o hardware. Ele envia sinais de leitura e escrita para a memória simulada (o canal) e verifica se o hardware responde corretamente. No código, também é verificado se os dados lidos são os mesmos que foram escritos. No hardware real, isso seria como executar um conjunto de testes automatizados em um ambiente de simulação para garantir que o chip de memória funciona conforme esperado.

4. Como Tudo Isso Se Relaciona ao Hardware Real?

   * Design Abstrato: está sendo construído uma abstração em software do que seria um componente de hardware real. O código em SystemC é usado para modelar e simular com o hardware se comportaria. O módulo de teste (MemoryIFTest) é usado para verificar se a memória funciona corretamente antes de qualquer tentativa de fabricação.
   * Em suma: 
      * Interface (memory_if.h): Define o que o hardware pode fazer (ler e escrever).
      * Canal (memory_channel.h e memory_channel.cpp): Implementa a funcionalidade do hardware (como a memória armazena e recupera dados).
      * Módulo de Teste (memoryiftest.h e memoryiftest.cpp): Simula o uso do hardware para garantir que ele funciona corretamente, identificando e corrigindo erros antes da fabricação.


Font: https://fpgatutorial.com/systemc-hieararchical-channels/