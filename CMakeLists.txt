cmake_minimum_required(VERSION 3.0)

project(dmedia-server)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-Wall -g -std=c++14")

add_subdirectory(lib)
