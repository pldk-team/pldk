cmake_minimum_required(VERSION 2.6)

project("pldk")
set(PLDK_VERSION 1)
set(PLDK_VERSION_MINOR 0)
set(PLDK_VERSION_PATCH 0)
set(PLDK_AUTHOR "kmc7468")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "./bin/")
include_directories("./include/")
file(GLOB SOURCES "./src/" "*.cc")

add_library(${CMAKE_PROJECT_NAME} ${SOURCES})

set(COMPILER_OPTIONS -std=c++11 -Wall -D__STDC_CONSTANT_MACROS -D__STDC_LIMIT_MACROS)

target_compile_options(${CMAKE_PROJECT_NAME} PRIVATE ${COMPILER_OPTIONS})