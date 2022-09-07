add_library(money money.cpp dollar.cpp franc.cpp)

target_include_directories(money PUBLIC ${CMAKE_SOURCE_DIR}/includes)

target_compile_options(money PRIVATE -g -Wall -Werror -std=c++17)
