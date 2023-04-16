#pragma once
#include <gtest/gtest.h>
#include "../src/Brackets.hpp"

TEST(BracketsSuite, ExampleOne) {
	  string s = "{[()()]}";
	  EXPECT_EQ(brackets::solution(s),1);
}

TEST(BracketsSuite, ExampleTwo) {
	  string s = "([)()]";
	  EXPECT_EQ(brackets::solution(s),0);
}
