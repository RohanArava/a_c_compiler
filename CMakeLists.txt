cmake_minimum_required(VERSION 3.13)
project(a_c_compiler)

set(SOURCE_FILES src/main.cpp)
add_executable(driver ${SOURCE_FILES})
target_include_directories(driver PRIVATE ./includes)