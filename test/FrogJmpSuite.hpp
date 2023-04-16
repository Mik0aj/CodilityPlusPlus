#pragma once
#include <gtest/gtest.h>
#include "../src/FrogJmp.hpp"

TEST(FrogJmpSuite, ExampleOne) {
	  EXPECT_EQ(frogJmp::solution(10,85,30),3);
}

