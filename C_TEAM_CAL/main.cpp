#include "gmock/gmock.h"


class Cal {
public:
    int getSum(int a, int b) {
        return a + b;
	}
};

//�׽�Ʈ ���̽� �ۼ�
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