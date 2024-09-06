#include <gtest/gtest.h>
#include "print_info.h"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions)
{
  EXPECT_STRNE("hello", "world");
  EXPECT_EQ(7 * 6, 42);
}

TEST(PrintInfoTest, PrintInfo)
{
  int result = print_info();
  EXPECT_EQ(result, 42);
}