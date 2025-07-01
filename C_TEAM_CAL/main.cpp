#include "gmock/gmock.h"
#include <iostream>

class Cal {
public:
    int getGop(int a, int b) { return a * b; }
};

//테스트 케이스 작성
TEST(t1, t2) {
    EXPECT_EQ(1, 1);
}

TEST(t1, Test_Gop) {
    Cal cal;
    EXPECT_EQ(6, cal.getGop(2,3));
}

int main() {
    ::testing::InitGoogleMock();
    return RUN_ALL_TESTS();
}