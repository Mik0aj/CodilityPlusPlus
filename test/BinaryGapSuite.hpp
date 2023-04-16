#pragma once
#include <gtest/gtest.h>
#include "../src/BinaryGap.hpp"

TEST(BinaryGapSuite, ExampleOne) {
	  EXPECT_EQ(binaryGap::solution(1041),5);
}

TEST(BinaryGapSuite, ExampleTwo) {
	  EXPECT_EQ(binaryGap::solution(15),0);
}


TEST(BinaryGapSuite, ExampleThree) {
	  EXPECT_EQ(binaryGap::solution(32),0);
}

