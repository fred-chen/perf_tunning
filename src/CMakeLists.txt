cmake_minimum_required(VERSION 3.0.0)
project(perf_tunning VERSION 0.1.0)

include(CTest)
enable_testing()

SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -fno-omit-frame-pointer")

add_executable(busy_loop busy_loop.cpp)
add_executable(busy_loop_with_sleep busy_loop_with_sleep.cpp)
target_link_options(busy_loop_with_sleep PRIVATE "-static")

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
