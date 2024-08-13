
# Comandos de Acesso e Permissões

## Alterar Propriedade de Pastas e Arquivos

```bash
sudo chown seu_usuario:seu_grupo /caminho/pasta
sudo chown ulisses:ulisses /Projects # Alterar propriedade da pasta
sudo chown ulisses:ulisses 'Ubuntu 16_04-disk002.vmdk' # Alterar propriedade do arquivo
sudo chown -R ulisses:ulisses /path/to/your/folder # Alterar propriedade de todos os arquivos de uma pasta
```

## Verificar a Qual Grupo um Usuário Pertence

```bash
groups
```

## Adicionar Usuário a um Grupo Específico

```bash
sudo usermod -aG vboxsf ulisses
```

## Alterar Permissões de Pastas

```bash
sudo chmod -R 755 /caminho/pasta
sudo chmod -R 755 /home/Projects
```

## Verificar Permissões de Pastas

```bash
sudo ls -l /caminho/pasta
sudo ls -l /home/Projects
```

## Mostrar Arquivos Ocultos no Ubuntu

Atalho: `Ctrl + H`

# Comandos de Cópia

## Copiar uma Pasta para Outro Local

```bash
sudo cp -r /home/ulisses/Downloads/boost_1_55_0/ /usr/local/
```

## Copiar Pasta do PC para o Docker (Container Rodando)

1. Liste os containers em execução:

    ```bash
    docker ps
    ```

2. Copie a pasta:

    ```bash
    docker cp /path/to/systemc.tar.gz <container_id>:/root/
    docker cp /path/to/boost.tar.gz <container_id>:/root/
    ```

# Testes e Configurações

## Testar SystemC

```bash
export SYSTEMC_HOME=/usr/local/systemc-2.3.1a
export LD_LIBRARY_PATH=$SYSTEMC_HOME/lib-linux64:$LD_LIBRARY_PATH
g++ -I$SYSTEMC_HOME/include -L$SYSTEMC_HOME/lib-linux64 -o test_systemc test_systemc.cpp -lsystemc -lm
./test_systemc
```

## Testar Boost

```bash
export BOOST_ROOT=/usr/local/boost_1_55_0
export BOOST_HOME=/usr/local/boost_1_55_0
export BOOST_LIBRARYDIR=$BOOST_ROOT/libs
g++ -I$BOOST_INCLUDEDIR -L$BOOST_LIBRARYDIR -o test_boost test_boost.cpp -lboost_system -lboost_filesystem
./test_boost
```

# Git

## Comandos Básicos do Git

```bash
git status
git add .
git commit -m "Sua mensagem de commit aqui"
git push origin main
```

# Redirecionamento de Output

## Criar um Arquivo TXT para Output de Comando no Terminal

```bash
./run_simulation.sh > output.txt 2>&1
```