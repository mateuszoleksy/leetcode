cmake_minimum_required(VERSION 3.31)
PROJECT(Fibonacci)
SET(CMAKE_CXX_STANDARD 14)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)

make_directory(${CMAKE_CURRENT_SOURCE_DIR}/src)
make_directory(${CMAKE_CURRENT_SOURCE_DIR}/include)
add_executable(fibonacci scripts/fibo.cpp)
target_include_directories(fibonacci PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)