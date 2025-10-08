#include <gtest/gtest.h>
#include "../compute.h"
#include <cmath>

TEST(ComputeSumTest, HandlesZero) {
    EXPECT_DOUBLE_EQ(computeSum(0), 0.0);
}

TEST(ComputeSumTest, HandlesOne) {
    EXPECT_DOUBLE_EQ(computeSum(1), cos(1));
}

TEST(ComputeSumTest, HandlesSmallNumber) {
    double expected = cos(1) + cos(3); // 1+2=3
    EXPECT_NEAR(computeSum(2), expected, 1e-9);
}

TEST(ComputeSumTest, HandlesLargerNumber) {
    double s = 0;
    int sum = 0;
    for (int i = 1; i <= 5; ++i) {
        sum += i;
        s += cos(sum);
    }
    EXPECT_NEAR(computeSum(5), s, 1e-9);
}
