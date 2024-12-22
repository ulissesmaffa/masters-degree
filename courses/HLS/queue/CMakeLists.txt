cmake_minimum_required (VERSION 2.6)
project (queue)

# Configuração do tipo de build
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Choose the type of build, options are: Debug Release RelWithDebInfo MinSizeRel." FORCE)
endif(NOT CMAKE_BUILD_TYPE)

# Flags do compilador
add_definitions(-Wfatal-errors)

# Busca pelos arquivos .cpp na pasta src
file(GLOB QUEUE_SOURCES CONFIGURE_DEPENDS "${PROJECT_SOURCE_DIR}/src/*.cpp")

# Mensagem para verificar a variável QUEUE_SOURCES
message(STATUS "Queue sources: ${QUEUE_SOURCES}")

# Inclusão de diretórios de cabeçalhos
include_directories("${PROJECT_BINARY_DIR}")
include_directories("/home/ulisses/Tools/Xilinx/Vivado/2019.2/include")

# Criação do executável
add_executable(queue_tb ${QUEUE_SOURCES})
