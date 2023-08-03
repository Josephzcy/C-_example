cmake_minimum_required(VERSION 3.24)
project(cpp_example)
SET(WORKSPACE_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_CXX_STANDARD 14)

SET(INCLUDE_DIRECTORY ${WORKSPACE_DIR}/include())
SET(SUBMODULE_GLOBAL_LINK_LIBS "" )

SET(${PROJECT_BINARY_DIR}  ${WORKSPACE_DIR}/build)
include_directories(${INCLUDE_DIRECTORY})


file(GLOB_RECURSE SRC_LIST ${WORKSPACE_DIR}/src/*.cpp)
MESSAGE(STATUS "src_list: ${SRC_LIST}")



SET(SRC_SUFFIX ".cpp")
foreach(src ${SRC_LIST})                                                                                                                                                                                                                                        
    string(REGEX MATCH "src.*" relative_path ${src})  
    string(REGEX REPLACE "src/" "" target_name ${relative_path})
    string(REGEX REPLACE "/" "" target_name ${target_name})
    string(REGEX REPLACE ${SRC_SUFFIX} "" target_name ${target_name})
    MESSAGE(STATUS "target_name: ${target_name}")

    add_executable(${target_name}_node ${WORKSPACE_DIR}/code_test/${target_name}_test.cpp)

    target_link_libraries(${target_name}_node
    ${SUBMODULE_GLOBAL_LINK_LIBS}
    )
endforeach()
  

