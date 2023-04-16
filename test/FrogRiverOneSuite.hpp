#pragma once
#include <gtest/gtest.h>
#include "../src/FrogRiverOne.hpp"

TEST(FrogRiverOneSuite, ExampleOne) {
	int X=5;
	  vector<int> vec = {1,3,1,4,2,3,5,4};
	  EXPECT_EQ(frogRiverOne::solution(X,vec),6);
}
