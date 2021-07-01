#include "lib.h"

#include <gtest/gtest.h>

TEST(Version, Pozitive) {
	ASSERT_GT(version(), 0);
}