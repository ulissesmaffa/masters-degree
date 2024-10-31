cmake_minimum_required (VERSION 2.6)
project (sa)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Choose the type of build, options are: Debug Release RelWithDebInfo MinSizeRel." FORCE)
endif(NOT CMAKE_BUILD_TYPE)

add_definitions(-Wfatal-errors)

file(GLOB SA_SOURCES CONFIGURE_DEPENDS "${PROJECT_SOURCE_DIR}/sa/*.cpp")

message(STATUS "Project source directory: ${PROJECT_SOURCE_DIR}")
message(STATUS "SA sources: ${SA_SOURCES}")

include_directories("${PROJECT_BINARY_DIR}")
include_directories("/home/ulisses/Tools/Xilinx/Vivado/2019.2/include")

#add_executable(sa_tb ${SA_SOURCES} ${TB_SOURCES})
add_executable(sa_tb ${SA_SOURCES})
