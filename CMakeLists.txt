cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra -pthread")

project(CSVFileReader)

include_directories(.)

add_executable(CSVFileReaderCPP src/main.cpp)

add_executable(testlib-test test/main.cpp)
