#pragma once
#include <gtest/gtest.h>
#include "../src/OddOccurrencesInArray.hpp"


TEST(OddOccurrencesInArraySuite, ExampleOne) {
	  vector<int> vec = {9,3,9,3,9,7,9};
	  EXPECT_EQ(oddOccurrencesInArray::solution(vec),7);
}
