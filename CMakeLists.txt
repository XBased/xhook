cmake_minimum_required(VERSION 2.8)

###################################################################################
project(xhook)

set(TARGET "xhook")
aux_source_directory(src CO_SRC_LIST)
add_library("${TARGET}" STATIC ${CO_SRC_LIST})

add_subdirectory(test)
