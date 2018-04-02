cmake_minimum_required(VERSION 3.9)
project(Polymorphism)

set(CMAKE_CXX_STANDARD 11)

add_executable(Polymorphism main.cpp Animal.cpp Animal.h Cat.cpp Cat.h Dog.cpp Dog.h)