cmake_minimum_required(VERSION 3.16)
project(Raytracer LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT DEFINED CMAKE_TOOLCHAIN_FILE AND DEFINED ENV{VCPKG_ROOT})
    set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake" CACHE STRING "")
endif()

add_library(raytracer_lib
    src/tuples.cpp
)

target_include_directories(raytracer_lib PUBLIC ${CMAKE_SOURCE_DIR}/src)

enable_testing()
find_package(Catch2 3 REQUIRED)

add_executable(tests
    src/tests.cpp
)

target_link_libraries(tests PRIVATE raytracer_lib Catch2::Catch2WithMain)

include(Catch)
catch_discover_tests(tests)
