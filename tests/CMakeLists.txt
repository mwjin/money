add_executable(
  hello_test
  hello_test.cpp
)

target_link_libraries(
  hello_test
  GTest::gtest_main
)

add_executable(
  dollar_test
  dollar_test.cpp
)

target_link_libraries(
  dollar_test
  GTest::gtest_main
  money
)

target_include_directories(dollar_test PRIVATE ${CMAKE_SOURCE_DIR}/includes)
include(GoogleTest)
gtest_discover_tests(hello_test)
gtest_discover_tests(dollar_test)
