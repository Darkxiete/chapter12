cmake_minimum_required(VERSION 3.14)
project(chapter12)

set(CMAKE_CXX_STANDARD 14)

add_executable(chapter12 main.cpp)
add_executable(stringbad stringbad.cpp stringbad.h vegnews.cpp)
add_executable(string1 string1.cpp string1.h sayings1.cpp)

add_executable(test test.cpp)