cmake_minimum_required(VERSION 3.16)
project(Raytracer LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(raytracer_lib PUBLIC ${CMAKE_SOURCE_DIR}/src)

enable_testing()


find_package(Catch2 3 REQUIRED)

add_executable(tests src/tuples.cpp src/tests.cpp)

target_link_libraries(tests PRIVATE Catch2::Catch2 Catch2::Catch2WithMain)
