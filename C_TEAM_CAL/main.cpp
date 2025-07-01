#include "gmock/gmock.h"

class Cal {
public:
    //�̰��� �ڵ� �ۼ�
    int getZegop(int a) { return a * a; };
};

//�׽�Ʈ ���̽� �ۼ�
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
}


int main() {
    ::testing::InitGoogleMock();
    return RUN_ALL_TESTS();
}