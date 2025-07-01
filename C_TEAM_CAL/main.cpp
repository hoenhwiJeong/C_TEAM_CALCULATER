#include "gmock/gmock.h"


class Cal {
public:
    int getSum(int a, int b) {
        return a + b;
	}
};

//테스트 케이스 작성
TEST(CalTest, GetSumTest) {
    Cal calculator;
    EXPECT_EQ(calculator.getSum(1, 1), 2);
    EXPECT_EQ(calculator.getSum(-1, 1), 0);
    EXPECT_EQ(calculator.getSum(-1, -1), -2);
}

int main() {
    ::testing::InitGoogleMock();
    return RUN_ALL_TESTS();
}