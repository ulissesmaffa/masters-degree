# Basic TLM (Transaction-Level Modeling)

Estrutura básica de um sistema de comunicação entre produtor e um consumidor usando uma FIFO como canal de comunicação focando apenas nos elementos essenciais.

* FIFO serve como buffer entre o produtor e o consumidor, permitindo a troca de dados.
* Estrutura:
1. Interfaces;
2. Canais (a FIFO);
3. Módulos (produtor e consumidor);
4. TOP (instancia o sistema completo);

