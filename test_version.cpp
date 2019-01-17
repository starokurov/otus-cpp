#include "lib.h"
#include "gtest/gtest.h"

TEST_F(MyTest, version) {
       MyTest t;
       EXPECT_LT( 0, t.version() );
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


