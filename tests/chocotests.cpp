#include <gtest/gtest.h>
#include "../include/chocotile.hpp"

TEST(test_01, basic_test_set)
{
    ASSERT_TRUE(choco_sep(1, 1) == 0);
}

TEST(test_02, basic_test_set)
{
    ASSERT_TRUE(choco_sep(100, 1) == 99);
}

TEST(test_03, basic_test_set)
{
    ASSERT_TRUE(choco_sep(-100, -20) == -1);
}

TEST(test_04, basic_test_set)
{
    ASSERT_TRUE(choco_sep(3, 5) == 6);
}

TEST(test_05, basic_test_set)
{
    ASSERT_TRUE(choco_sep(3, -1) == -1);
}

TEST(test_06, basic_test_set)
{
    ASSERT_TRUE(choco_sep(0, 5) == -1);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}