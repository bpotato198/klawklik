cmake_minimum_required(VERSION 3.10)

project(klawklik VERSION 0.2.1)

set(C_STANDARD 17)
set(C_STANDARD_REQUIRED OFF)

find_package(raylib REQUIRED)

add_executable(klawklik src/main.c)

target_link_libraries(klawklik raylib m)
add_compile_options(-Wall -lraylib -lm -ldl -lpthread -lGL -Lrt -lX11)

