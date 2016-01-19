cmake_minimum_required(VERSION 2.8)

###################################################################################
project(xhook)

set(TARGET "xhook")
add_library("${TARGET}" STATIC "../src/xhook.cpp")
add_subdirectory(test)
