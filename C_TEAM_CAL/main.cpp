#include "gmock/gmock.h"

class Cal {
public:
    //�̰��� �ڵ� �ۼ�

    double getSumSum(double a, double b, double c) {
        return a + b + c;
    }
};

//�׽�Ʈ ���̽� �ۼ�
TEST(t1, t2) {
    EXPECT_EQ(1, 1);
}


TEST(Calculator, TC6) {
    Cal cal;
    EXPECT_EQ(6, cal.getSumSum(1,2,3));
}

int main() {
    ::testing::InitGoogleMock();
    return RUN_ALL_TESTS();
}