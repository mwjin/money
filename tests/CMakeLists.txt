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
)

include(GoogleTest)
gtest_discover_tests(hello_test)
