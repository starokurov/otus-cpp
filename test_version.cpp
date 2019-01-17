#define BOOST_TEST_MODULE test_version

#include "lib.h"

#include <boost/test/unit_test.hpp>

#include "gtest/gtest.h"

BOOST_AUTO_TEST_SUITE(test_version)

BOOST_AUTO_TEST_CASE(test_valid_version)
{
    BOOST_CHECK(version() > 0);
}

BOOST_AUTO_TEST_SUITE_END()


/*
TEST(CustomOutputTest, PrintsMessage) {
       EXPECT_TRUE( version() > 0 );
}
    
int _tmain(int argc, _TCHAR* argv[])
{
   /*The method is initializes the Google framework and must be called before RUN_ALL_TESTS */
   ::testing::InitGoogleTest(&argc, argv);

   /*RUN_ALL_TESTS automatically detects and runs all the tests defined using the TEST macro. 
   It's must be called only once in the code because multiple calls lead to conflicts and, 
   therefore, are not supported.
   */ 
   return RUN_ALL_TESTS();
}
*/
