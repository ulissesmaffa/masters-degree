cmake_minimum_required (VERSION 2.6)
project (loop_de_for)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Choose the type of build, options are: Debug Release RelWithDebInfo MinSizeRel." FORCE)
endif(NOT CMAKE_BUILD_TYPE)

add_definitions(-Wfatal-errors)

file(GLOB LOOP_DE_FOR_SOURCES CONFIGURE_DEPENDS "${PROJECT_SOURCE_DIR}/src/*.c")

message(STATUS "Project source directory: ${PROJECT_SOURCE_DIR}")
message(STATUS "LOOP_DE_FOR sources: ${LOOP_DE_FOR_SOURCES}")

include_directories("${PROJECT_BINARY_DIR}")
include_directories("/home/ulisses/Tools/Xilinx/Vivado/2019.2/include")

add_executable(loop_de_for_tb ${LOOP_DE_FOR_SOURCES})
