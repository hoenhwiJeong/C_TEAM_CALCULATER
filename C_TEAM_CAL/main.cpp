#include "gmock/gmock.h"

class Cal {
public:
    //�̰��� �ڵ� �ۼ�
    int getMinus(int a, int b) { return a - b; }
};

//�׽�Ʈ ���̽� �ۼ�
TEST(t1, t2) {
    EXPECT_EQ(1, 1);
}

TEST(t1, t4) {
    Cal c;

    int actual = c.getMinus(2, 1);

    EXPECT_EQ(1, actual);
}

int main() {
    ::testing::InitGoogleMock();
    return RUN_ALL_TESTS();
}