#include <gtest/gtest.h>
#include "math_utils.hpp"

TEST(MathUtilsTest, SafeDivideValid) {
    auto result = Core::safe_divide(10.0, 2.0);
    ASSERT_TRUE(result.has_value());
    EXPECT_DOUBLE_EQ(result.value(), 5.0);
}

TEST(MathUtilsTest, SafeDivideByZero) {
    auto result = Core::safe_divide(10.0, 0.0);
    ASSERT_FALSE(result.has_value());
    EXPECT_EQ(result.error(), Core::MathError::DivisionByZero);
}
