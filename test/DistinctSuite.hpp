#pragma once
#include <gtest/gtest.h>
#include "../src/Distinct.hpp"

TEST(DistinctSuite, ExampleOne) {
	  vector<int> vec = {2,1,1,2,3,1};
	  EXPECT_EQ(distinct::solution(vec),3);
}
