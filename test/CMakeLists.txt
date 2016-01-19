cmake_minimum_required(VERSION 2.8)

###################################################################################
project(test)

include_directories("${PROJECT_SOURCE_DIR}/../src")
aux_source_directory(${PROJECT_SOURCE_DIR} SRC_LIST)

foreach(var ${SRC_LIST})
    string(REGEX REPLACE ".*/" "" var ${var})
    string(REGEX REPLACE ".cpp" "" tgt ${var})
    add_executable(${tgt}.t ${var})
    target_link_libraries(${tgt}.t xhook)
endforeach(var)

