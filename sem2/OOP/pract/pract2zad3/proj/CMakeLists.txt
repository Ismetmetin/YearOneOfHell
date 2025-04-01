cmake_minimum_required(VERSION 3.10)
project(proj)

# Add the library
add_subdirectory(../lib ${CMAKE_BINARY_DIR}/lib)

# Add the executable
add_executable(proj main.cpp)

# Include the mathlib headers
target_include_directories(proj PRIVATE ../lib)

# Link the mathlib library
target_link_libraries(proj PRIVATE mathlib)