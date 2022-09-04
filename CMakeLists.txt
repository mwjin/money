cmake_minimum_required(VERSION 3.0.0)
project(Money VERSION 0.1.0)

include(CTest)
enable_testing()

add_subdirectory(lib)

add_executable(program main.cpp)

target_link_libraries(program money)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
