#include <iostream>
#include "gmock/gmock.h"

class Cal {
public:
    int getZegop(int a) { return a * a; };
    int getSum(int a, int b) {
        return a + b;
	  }
    int getGop(int a, int b) { return a * b; }
};

//Å×½ºÆ® ÄÉÀÌ½º ÀÛ¼º
TEST(t1, t2) {
    EXPECT_EQ(1, 1);
}

TEST(TSgetZegop, TC1) {
    int exp = 1;
    int a = 1;
    Cal c;
    int ret = c.getZegop(a);
    EXPECT_EQ(exp, ret);
}

TEST(TSgetZegop, TC2) {
    int exp = 0;
    int a = 0;
    Cal c;
    int ret = c.getZegop(a);
    EXPECT_EQ(exp, ret);
}

TEST(TSgetZegop, TC3) {
    int exp = 4;
    int a = -2;
    Cal c;
    int ret = c.getZegop(a);
    EXPECT_EQ(exp, ret);
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