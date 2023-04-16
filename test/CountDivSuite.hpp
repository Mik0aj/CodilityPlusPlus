#pragma once
#include <gtest/gtest.h>
#include "../src/CountDiv.hpp"

TEST(CountDivSuite, ExampleOne) {
	int A=6;
		int B=11;
		int C=2;
	  EXPECT_EQ(countDiv::solution(A,B,C),3);
}
