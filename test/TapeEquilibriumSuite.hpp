#pragma once
#include <gtest/gtest.h>
#include "../src/TapeEquilibrium.hpp"

TEST(TapeEquilibriumSuite, ExampleOne) {
	  vector<int> vec = {3,1,2,4,3};
	  EXPECT_EQ(tapeEquilibrium::solution(vec),1);
}

