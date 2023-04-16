#pragma once
#include <gtest/gtest.h>
#include "../src/GenomicRangeQuery.hpp"

TEST(GenomicRangeQuerySuite, ExampleOne) {
	string S = "CAGCCTA";
	  vector<int> P = {2,5,0};
	  vector<int> Q = {4,5,6};
	  vector<int> expected = {2,4,1};
	  EXPECT_EQ(genomicRangeQuery::solution(S,P,Q),expected);
}
