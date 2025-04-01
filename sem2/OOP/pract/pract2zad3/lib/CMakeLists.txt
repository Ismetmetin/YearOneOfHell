cmake_minimum_required(VERSION 3.10)
project(mathlib)

add_library(mathlib mathlib.cpp)

target_include_directories(mathlib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
