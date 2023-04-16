#pragma once
#include <gtest/gtest.h>
#include "../src/MissingInteger.hpp"

TEST(MissingIntegerSuite, ExampleOne) {
	  vector<int> vec = {1,3,6,4,1,2};
	  EXPECT_EQ(missingInteger::solution(vec),5);
}

TEST(MissingIntegerSuite, ExampleTwo) {
	  vector<int> vec = {1,2,3};
	  EXPECT_EQ(missingInteger::solution(vec),4);
}

TEST(MissingIntegerSuite, ExampleThree) {
	  vector<int> vec = {-1,-3};
	  EXPECT_EQ(missingInteger::solution(vec),1);
}

