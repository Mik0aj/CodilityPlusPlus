#pragma once
#include <gtest/gtest.h>
#include "../src/PermCheck.hpp"

TEST(PermCheckSuite, ExampleOne) {
	  vector<int> vec = {4,1,3,2};
	  EXPECT_EQ(permCheck::solution(vec),1);
}

