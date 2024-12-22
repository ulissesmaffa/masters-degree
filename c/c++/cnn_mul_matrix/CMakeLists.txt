cmake_minimum_required(VERSION 3.5.0)

project(sa VERSION 0.1.0 LANGUAGES C)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Choose the type of build, options are: Debug Release RelWithDebInfo MinSizeRel." FORCE)
endif(NOT CMAKE_BUILD_TYPE)

add_definitions(-Wfatal-errors)



file(GLOB SA_SOURCES CONFIGURE_DEPENDS "${PROJECT_SOURCE_DIR}/sa/*.c")
file(GLOB TB_SOURCES CONFIGURE_DEPENDS "${PROJECT_SOURCE_DIR}/tb/*.c")

#include_directories("${PROJECT_SOURCE_DIR}/vivado_include") 
include_directories("${PROJECT_SOURCE_DIR}/include") 
include_directories("${PROJECT_BINARY_DIR}")



add_executable(sa_tb ${SA_SOURCES} ${TB_SOURCES})

target_link_libraries(sa_tb c )
target_link_libraries(sa_tb gcc )
target_link_libraries(sa_tb m )
target_link_libraries(sa_tb blas )