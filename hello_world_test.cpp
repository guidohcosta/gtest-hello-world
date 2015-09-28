#include <gtest/gtest.h>
#include "hello-world.c"

TEST(MathTest, TwoPlusTwoEqualsFour) {
  EXPECT_EQ(2 + 2, 4);
}

TEST(MathTest, Salsixa) {
  EXPECT_EQ(4, salsixa(2));
  EXPECT_EQ(6, salsixa(3));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest( &argc, argv );
  return RUN_ALL_TESTS();
}
