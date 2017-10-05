cmake_minimum_required(VERSION 3.8)
project(FullComp)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES library.cpp library.h)
add_library(FullComp ${SOURCE_FILES})
set(TEST_FILES ./fullcomp_test/catch.hpp ./fullcomp_test/rational_check.cpp library.h library.cpp)
add_executable(FullCompTest ${TEST_FILES})