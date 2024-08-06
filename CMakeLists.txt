cmake_minimum_required(VERSION 3.10)
project("4.2.2")

add_subdirectory(Catch2-devel)

add_executable(${PROJECT_NAME} "main.cpp")

target_link_libraries(${PROJECT_NAME} PRIVATE Catch2::Catch2 Catch2::Catch2WithMain)