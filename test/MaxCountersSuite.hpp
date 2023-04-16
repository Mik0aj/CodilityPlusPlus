#pragma once
#include <gtest/gtest.h>
#include "../src/MaxCounters.hpp"

TEST(MaxCountersSuite, ExampleOne) {
	int N=5;
	  vector<int> vec = {3,4,4,6,1,4,4};
	  vector<int> expected = {3,2,2,4,2};
	  EXPECT_EQ(maxCounters::solution(N,vec),expected);
}

