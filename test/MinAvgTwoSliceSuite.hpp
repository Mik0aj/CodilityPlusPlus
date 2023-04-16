#pragma once
#include <gtest/gtest.h>
#include "../src/MinAvgTwoSlice.hpp"

TEST(MinAvgTwoSlice, ExampleOne) {
	  vector<int> A = {4,2,2,5,1,5,8};
	  EXPECT_EQ(minAvgTwoSlice::solution(A),1);
}
