#include <gtest/gtest.h>
#include "../src/CodilitySolutions.h"

TEST(BinaryGapSuite, ExampleOne) {
	  EXPECT_EQ(binaryGap::solution(1041),5);
}

TEST(BinaryGapSuite, ExampleTwo) {
	  EXPECT_EQ(binaryGap::solution(15),0);
}


TEST(BinaryGapSuite, ExampleThree) {
	  EXPECT_EQ(binaryGap::solution(32),0);
}

TEST(OddOccurrencesInArraySuite, ExampleOne) {
	  vector<int> vec = {9,3,9,3,9,7,9};
	  EXPECT_EQ(oddOccurrencesInArray::solution(vec),7);
}

TEST(FrogJmpSuite, ExampleOne) {
	  EXPECT_EQ(frogJmp::solution(10,85,30),3);
}

TEST(PermMissingElemSuite, ExampleOne) {
	  vector<int> vec = {2,3,1,5};
	  EXPECT_EQ(permMissingElem::solution(vec),4);
}

TEST(TapeEquilibriumSuite, ExampleOne) {
	  vector<int> vec = {3,1,2,4,3};
	  EXPECT_EQ(tapeEquilibrium::solution(vec),1);
}

TEST(FrogRiverOneSuite, ExampleOne) {
	int X=5;
	  vector<int> vec = {1,3,1,4,2,3,5,4};
	  EXPECT_EQ(frogRiverOne::solution(X,vec),6);
}

TEST(PermCheckSuite, ExampleOne) {
	  vector<int> vec = {4,1,3,2};
	  EXPECT_EQ(permCheck::solution(vec),1);
}


TEST(MaxCountersSuite, ExampleOne) {
	int N=5;
	  vector<int> vec = {3,4,4,6,1,4,4};
	  vector<int> expected = {3,2,2,4,2};
	  EXPECT_EQ(maxCounters::solution(N,vec),expected);
}

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

TEST(PassingCarsSuite, ExampleOne) {
	  vector<int> vec = {0,1,0,1,1};
	  EXPECT_EQ(passingCars::solution(vec),5);
}

TEST(CountDivSuite, ExampleOne) {
	int A=6;
		int B=11;
		int C=2;
	  EXPECT_EQ(countDiv::solution(A,B,C),3);
}

TEST(DistinctSuite, ExampleOne) {
	  vector<int> vec = {2,1,1,2,3,1};
	  EXPECT_EQ(distinct::solution(vec),3);
}


TEST(MaxProductOfThreeSuite, ExampleOne) {
	  vector<int> vec = {-3,1,2,-2,5,6};
	  EXPECT_EQ(maxProductOfThree::solution(vec),60);
}

TEST(BracketsSuite, ExampleOne) {
	  string s = "{[()()]}";
	  EXPECT_EQ(brackets::solution(s),1);
}

TEST(BracketsSuite, ExampleTwo) {
	  string s = "([)()]";
	  EXPECT_EQ(brackets::solution(s),0);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv); // Initialize GTest framework
    return RUN_ALL_TESTS(); // Run all tests and return the result
}
