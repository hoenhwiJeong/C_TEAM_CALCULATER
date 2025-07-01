#include <iostream>
#include "gmock/gmock.h"

class Cal {
public:
    int getSum(int a, int b) {
        return a + b;
	  }
    int getGop(int a, int b) { return a * b; }
};

//Å×½ºÆ® ÄÉÀÌ½º ÀÛ¼º
TEST(t1, t2) {
    EXPECT_EQ(1, 1);
}

TEST(CalTest, GetSumTest) {
    Cal calculator;
    EXPECT_EQ(calculator.getSum(1, 1), 2);
    EXPECT_EQ(calculator.getSum(-1, 1), 0);
    EXPECT_EQ(calculator.getSum(-1, -1), -2);
}

TEST(t1, Test_Gop) {
    Cal cal;
    EXPECT_EQ(6, cal.getGop(2,3));
}

int main() {
    ::testing::InitGoogleMock();
    return RUN_ALL_TESTS();
}