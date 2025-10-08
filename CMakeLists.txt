cmake_minimum_required(VERSION 3.15)
project(lab03Loops)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Исходный код студента
add_library(compute compute.cpp compute.h)

# Подключаем Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
set(INSTALL_GTEST OFF CACHE BOOL "" FORCE)
set(BUILD_GMOCK OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Тесты
add_executable(runTests tests/test_compute.cpp)
target_link_libraries(runTests PRIVATE compute gtest gtest_main)
include(GoogleTest)
gtest_discover_tests(runTests)
