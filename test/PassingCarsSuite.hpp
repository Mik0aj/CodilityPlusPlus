#pragma once
#include <gtest/gtest.h>
#include "../src/PassingCars.hpp"

TEST(PassingCarsSuite, ExampleOne) {
	  vector<int> vec = {0,1,0,1,1};
	  EXPECT_EQ(passingCars::solution(vec),5);
}
