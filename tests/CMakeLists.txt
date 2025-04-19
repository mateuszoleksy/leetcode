cmake_minimum_required(VERSION 3.31)
project(unit_fibo)

enable_testing()

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE) # Use shared CRT

add_executable(
  unit_fibo
    ${CMAKE_CURRENT_SOURCE_DIR}/unit_fibo.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/../scripts/fibonacci.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/../scripts/fibonacci.h
)

target_link_libraries(
  unit_fibo
  GTest::gtest_main
)

add_test(
  NAME unit_fibo
  COMMAND unit_fibo
)
target_include_directories(
  unit_fibo
  PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../include
)

include(GoogleTest)
gtest_discover_tests(unit_fibo)