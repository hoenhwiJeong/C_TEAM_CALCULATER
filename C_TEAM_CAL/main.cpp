#include "gmock/gmock.h"

class Cal {
public:
    //�̰��� �ڵ� �ۼ�
    int getDvide(int a, int b) { 
        return a / b; 
    }
};


TEST(CalTest, DivideTC) {
    Cal cal;
    int ret = cal.getDvide(4, 2);
    EXPECT_EQ(2, ret);
}

int main() {
    ::testing::InitGoogleMock();
    return RUN_ALL_TESTS();
}