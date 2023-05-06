cmake_minimum_required(VERSION 3.23)
project(test)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

add_executable(test test.cpp
                Recurrent_linked_list.cpp
                Recurrent_linked_list.h)
