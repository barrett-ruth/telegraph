# 3.13 required for autoamtic benchmark downloads:
# https://github.com/google/benchmark?tab=readme-ov-file#installation
cmake_minimum_required(VERSION 3.13)
project(telegraph)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(telegraph INTERFACE)

target_include_directories(
  telegraph INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
                        $<INSTALL_INTERFACE:include>)

enable_testing()
add_subdirectory(test)
