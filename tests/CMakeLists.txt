add_executable(
  money_test
  money_test.cpp
)

target_link_libraries(
  money_test
  GTest::gtest_main
  money
)

target_include_directories(money_test PRIVATE ${CMAKE_SOURCE_DIR}/includes)
include(GoogleTest)
gtest_discover_tests(money_test)
