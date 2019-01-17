#pragma once

#include "gtest/gtest.h"

// using namespace std;

class MyTest : public ::testing::Test {
  public:
    int version();
};

