cmake_minimum_required(VERSION 3.3)
project(c_bi_cli_lib)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES cli.c lib.c)
add_executable(cli ${SOURCE_FILES} lib.h)
