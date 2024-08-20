
# Canais Hierárquicos

Canais hierárquicos podem encapsular múltiplas classes ou módulos, representando a comunicação de maneira mais abstrada e modular. 

Estrutura de um Canal Hierárquico: geralmente composto por duas classes principais. Padrão de projeto (Bridge Pattern).

1. Classe interface: define como outros módulos ou canais se conectam ao canal hierárquico. Funciona como uma porta para com outras partes do sistema. É uma interface abstrada para uma memória, a classe. Não tem a implementação real das funções "read" e "write", apenas declara que qualquer classe derivada precisa implementá-las. Define o que um canal de memória deve ser capaz de fazer, sem definir como ele faz.

   * memory_if.h => declaração da interface. Específica o que o canal de memória deve ser capaz de fazer.

2. Classe de implementação: fornece a funcionalidade real do canal, implementando métodos definidos na interface. Essa classe lida com a lógica interna de como os dados são transmitidos, armazenados ou processados. Herda tanto sc_module (funcionando como um módulo em systemC) quanto de memory_if (permitindo que implemente as funções de leitura e escrita definidas na interface).

   * memory_channel.h => Define a estrutura da classe memory_channel, incluindo suas variáveis e métodos, mas não implementa os métodos. É aqui que a interface da classe é estabelecida. Declara como o canal de memória será estruturado, incluindo as funções e variáveis que usará.

   * memory_channel.cpp => Implementa o comportamento definido em memory_channel.h. É onde o trabalho real dos métodos read e write é realizado e onde o construtor inicializa o módulo e a memória. Define como o canal de memória realmente se comporta, implementano as funções declaradas no arquivo .h.

Observação importante: nos arquivos memory_if.h, memory_channel.h e memory_channel.cpp descrevem o uso da memória no nível de operações de leitura e escrita de forma assíncrona. O clk será introduzido em um nível mais alto.

# Conexão com Canais Hierárquicos

Implementação do módulo teste, responsável por verificar se o canal de memória está funcionando corretamente.


   * memoryiftest.h => Declara um módulo de teste (MemoryIFTest) que tem uma porta para o clock e uma porta para se conectar a qualquer implementação da interface memory_if.

   * memoryiftest.cpp => Implementa o módulo de teste, criando um processo (test_stim) que gera dados aleatórios, escreve na memória, lê de volta e verifica a integridade dos dados.


#  Bancada de Testes e Simulação do Canal de Memória

Configura e executa a simulação, conectando os módulos (MemoryIFTest e memory_channel) e controlando a execução para garantir que a memória funcione conforme o esparado em um ambiente de teste.

* testebench.cpp => age como o controlador principal da simulação.

Funções
1. Instanciação: Cria instâncias do módulo de teste e do canal de memória.
2. Conexão: Conecta o sinal de clock ao módulo de teste e conecta o módulo de teste ao canal de memória.
3. Simulação: Define o período do clock e inicia a simulação, permitindo que os testes no canal de memória sejam realizados.


# Simulation

g++ -std=c++11 -I$SYSTEMC_HOME/include -L$SYSTEMC_HOME/lib-linux64 -o sim -lsystemc *.cpp  && echo "Compile done. Starting run..." && ./sim 




============================================================================
1. Interface (memory_if.h) - Contrato para Interação com o Hardware

    O que é em hardware: Pense na interface como a definição dos pinos de entrada e saída de um chip de memória. Ela define o que pode ser feito com o hardware, como ler de uma determinada posição de memória ou escrever nela. No mundo real, isso seria como os sinais de controle e de dados que você vê em uma folha de dados (datasheet) de um chip de memória, que definem como outros componentes (como um processador) podem interagir com a memória.

2. Canal (memory_channel.h e memory_channel.cpp) - Implementação da Memória

    O que é em hardware: Este é o coração do hardware, onde você realmente constrói o comportamento interno do chip de memória. No mundo físico, isso seria como a lógica interna do chip que gerencia como os dados são armazenados e recuperados a partir das células de memória. O array mem[255] no código seria análogo às células de memória reais no chip, onde os bits são armazenados.
    Por que é chamado de "Canal"?: Em SystemC, o termo "canal" é usado para descrever um componente que gerencia a comunicação de dados entre módulos. No contexto do seu código, memory_channel é a implementação do "hardware" que gerencia o armazenamento e a recuperação de dados.

3. Módulo de Teste (memoryiftest.h e memoryiftest.cpp) - Testando o Hardware

    O que é em hardware: No mundo real, isso é semelhante ao processo de verificação e validação de um chip antes de ser fabricado. Quando os engenheiros projetam um chip, eles criam bancadas de teste que simulam o funcionamento do chip em diferentes condições para garantir que ele funcione corretamente.
    O que você está fazendo no código:
        Simulação de Estímulos: O módulo MemoryIFTest é como um sistema de teste que gera diferentes condições de uso para o hardware. Ele envia sinais de leitura e escrita para a memória simulada (o canal) e verifica se o hardware responde corretamente.
        Verificação de Erros: No código, você verifica se os dados lidos são os mesmos que foram escritos. No hardware real, isso seria como executar um conjunto de testes automatizados em um ambiente de simulação para garantir que o chip de memória funciona conforme esperado.

4. Como Tudo Isso Se Relaciona ao Hardware Real?

    Design Abstrato: O que você está fazendo é construir uma abstração em software do que seria um componente de hardware real. O código em SystemC é usado para modelar e simular como o hardware se comportaria. Isso é crucial na engenharia de hardware, pois permite que os engenheiros validem o design antes de realmente construir o chip.
    Verificação Pré-Fabricação: O módulo de teste (MemoryIFTest) é usado para verificar se a memória funciona corretamente antes de qualquer tentativa de fabricação. Na prática, você estaria evitando erros caros e demorados ao detectar problemas no estágio de simulação.

Resumo:

    Interface (memory_if.h): Define o que o hardware pode fazer (ler e escrever).
    Canal (memory_channel.h e memory_channel.cpp): Implementa a funcionalidade do hardware (como a memória armazena e recupera dados).
    Módulo de Teste (memoryiftest.h e memoryiftest.cpp): Simula o uso do hardware para garantir que ele funciona corretamente, identificando e corrigindo erros antes da fabricação.

Em suma, você está virtualmente projetando um componente de hardware (uma memória) e usando um ambiente de simulação para testar e validar esse componente, garantindo que ele funcionará corretamente quando for implementado em um hardware físico.