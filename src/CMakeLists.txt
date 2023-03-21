cmake_minimum_required(VERSION 3.0.0)
project(perf_tunning VERSION 0.1.0)

include(CTest)
enable_testing()

SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -fno-omit-frame-pointer")
SET(CMAKE_C_FLAGS  "${CMAKE_C_FLAGS} -fno-omit-frame-pointer")
find_package( Threads )
link_libraries( ${CMAKE_THREAD_LIBS_INIT} )

add_executable(busy_loop busy_loop.cpp)
add_executable(busy_loop_2s busy_loop_2s.cpp)
add_executable(busy_loop_with_sleep busy_loop_with_sleep.cpp)
add_executable(busy_loop_sleep_c busy_loop_sleep_c.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
