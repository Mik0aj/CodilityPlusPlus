#pragma once
#include <gtest/gtest.h>
#include "../src/PermMissingElem.hpp"

TEST(PermMissingElemSuite, ExampleOne) {
	  vector<int> vec = {2,3,1,5};
	  EXPECT_EQ(permMissingElem::solution(vec),4);
}
