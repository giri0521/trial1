#include<gtest/gtest.h>
#include "add.h"

TEST(Addtest, NegativeNumbers){
    EXPECT_EQ(add(-1,-2), -3);
}

TEST(Addtest, PositiveNumbers){
    EXPECT_EQ(add(1,2), 3);
}

TEST(Addtest, DefaultParameters){
    EXPECT_EQ(add(), 0);
}

TEST(Addtest, MixedNumbers){
    EXPECT_EQ(add(-5,4), -1);
}
