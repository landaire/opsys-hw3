cmake_minimum_required(VERSION 3.1)
project(hw3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES myLS.c)
set(HEADER_FILES myLS.h)

add_executable(hw3 ${SOURCE_FILES} ${HEADER_FILES})
