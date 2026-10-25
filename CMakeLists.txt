cmake_minimum_required(VERSION 3.20)
project(Cpp23Template VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_compile_options(-Wall -Wextra -Wpedantic)

# --- CONFIGURACIÓN DE GOOGLE TEST ---
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
  DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()
# -----------------------------------

include_directories(include)

# Ejecutable principal
add_executable(main src/main.cpp)

# Pruebas unitarias
add_executable(
  unit_tests
  tests/test_main.cpp
)

target_link_libraries(
  unit_tests
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(unit_tests)
