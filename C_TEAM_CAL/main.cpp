#include <iostream>
#include "gmock/gmock.h"

class Cal {
public:
    //�̰��� �ڵ� �ۼ�
    double getSumSum(double a, double b, double c) {
        return a + b + c;
    }
    int getZegop(int a) { return a * a; };
    int getSum(int a, int b) {
        return a + b;
	  }
    int getGop(int a, int b) { return a * b; }
    int getMinus(int a, int b) { return a - b; }
};

//Å×½ºÆ® ÄÉÀÌ½º ÀÛ¼º
TEST(t1, t2) {
    EXPECT_EQ(1, 1);
}


TEST(Calculator, TC6) {
    Cal cal;
    EXPECT_EQ(6, cal.getSumSum(1,2,3));
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
}

TEST(CalTest, GetSumTest) {
    Cal calculator;
    EXPECT_EQ(calculator.getSum(1, 1), 2);
    EXPECT_EQ(calculator.getSum(-1, 1), 0);
    EXPECT_EQ(calculator.getSum(-1, -1), -2);
}
  
TEST(t1, Test_Minus) {
    Cal c;
    int actual = c.getMinus(2, 1);
    EXPECT_EQ(1, actual);
}

TEST(t1, Test_Gop) {
    Cal cal;
    EXPECT_EQ(6, cal.getGop(2,3));
}

int main() {
    ::testing::InitGoogleMock();
    return RUN_ALL_TESTS();
}