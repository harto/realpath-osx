# Project Setup
cmake_minimum_required(VERSION 2.6)
project(realpath)

# List Source Files
set(SOURCES realpath.c)

# Create Executables
add_executable(${CMAKE_PROJECT_NAME} ${SOURCES})

# Create Install Target
install(TARGETS ${CMAKE_PROJECT_NAME} DESTINATION bin)
