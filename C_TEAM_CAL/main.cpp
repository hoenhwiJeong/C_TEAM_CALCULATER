#include "gmock/gmock.h"

class Cal {
public:
    //�̰��� �ڵ� �ۼ�
    int getSumSum(int a, int b, int c) { 
        return a + b + c; 
    }
};

//�׽�Ʈ ���̽� �ۼ�
TEST(t1, t2) {
    EXPECT_EQ(1, 1);
}
TEST(t1, TC5) {
    Cal cal;
    int ret = cal.getSumSum(1, 2, 3);
    EXPECT_EQ(6, ret);
}

int main() {
    ::testing::InitGoogleMock();
    return RUN_ALL_TESTS();
}