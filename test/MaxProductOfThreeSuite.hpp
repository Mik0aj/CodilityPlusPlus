#pragma once
#include <gtest/gtest.h>
#include "../src/MaxProductOfThree.hpp"

TEST(MaxProductOfThreeSuite, ExampleOne) {
	  vector<int> vec = {-3,1,2,-2,5,6};
	  EXPECT_EQ(maxProductOfThree::solution(vec),60);
}

