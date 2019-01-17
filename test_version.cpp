//#define BOOST_TEST_MODULE test_version

#include "lib.h"
#include "gtest/gtest.h"

/*
#include <boost/test/unit_test.hpp>

#include "gtest/gtest.h"

BOOST_AUTO_TEST_SUITE(test_version)

BOOST_AUTO_TEST_CASE(test_valid_version)
{
    BOOST_CHECK(version() > 0);
}

BOOST_AUTO_TEST_SUITE_END()

*/
/*
TEST(MyTest, version) {
       MyTest t;
       EXPECT_LT( 0, t.version() );
}
*/   
    
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    
    for (int i = 1; i < argc; ++i) {
        printf("arg %2d = %s\n", i, argv[i]);
    }

    return RUN_ALL_TESTS();
}

