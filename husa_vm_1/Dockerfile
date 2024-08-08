# Usar a imagem base do Ubuntu
FROM ubuntu:20.04

# Atualizar e instalar dependências necessárias
RUN apt-get update && apt-get install -y \
    software-properties-common \
    wget \
    build-essential \
    libgmp3-dev \
    libmpfr-dev \
    libmpc-dev \
    flex \
    bison

# Baixar e instalar GCC 4.9.3
RUN wget http://ftp.gnu.org/gnu/gcc/gcc-4.9.3/gcc-4.9.3.tar.gz && \
    tar -xzf gcc-4.9.3.tar.gz && \
    cd gcc-4.9.3 && \
    ./contrib/download_prerequisites && \
    mkdir build && cd build && \
    ../configure --enable-languages=c,c++ --disable-multilib && \
    make -j$(nproc) && \
    make install && \
    cd ../.. && \
    rm -rf gcc-4.9.3 gcc-4.9.3.tar.gz

# Configurar alternativas para usar GCC 4.9.3 como padrão
RUN update-alternatives --install /usr/bin/gcc gcc /usr/local/bin/gcc 50
RUN update-alternatives --install /usr/bin/g++ g++ /usr/local/bin/g++ 50

# Criar diretórios de trabalho
RUN mkdir -p /workspace /usr/local/boost_1_55_0 /usr/local/systemc-2.3.1

# Definir o diretório de trabalho
WORKDIR /workspace

# Comando para manter o contêiner rodando
CMD ["bash"]
