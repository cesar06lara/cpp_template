#include <gtest/gtest.h>

TEST(EntornoTest, SumaBasica) {
    int a = 5;
    int b = 10;
    EXPECT_EQ(a + b, 15);
}

TEST(EntornoTest, ValidarCPlusPlus23) {
    // Comprobamos que estamos usando C++23 o superior
    EXPECT_GE(__cplusplus, 202302L);
}
