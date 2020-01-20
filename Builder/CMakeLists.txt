cmake_minimum_required(VERSION 2.8.9)
#file(GLOB...) allows for wildcard additions
file(GLOB SOURCES "*.cpp")

add_executable(builder ${SOURCES})

