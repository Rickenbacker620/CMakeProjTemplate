
add_executable(HelloWorldTest test.cpp)

target_link_libraries(HelloWorldTest PRIVATE HelloWorldLib GTest::gtest GTest::gtest_main)

gtest_discover_tests(HelloWorldTest)