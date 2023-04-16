
#include <gtest/gtest.h>
#include "AbsDistinctSuite.hpp"
#include "BinaryGapSuite.hpp"
#include "BracketsSuite.hpp"
#include "CountDivSuite.hpp"
#include "DistinctSuite.hpp"
#include "FrogJmpSuite.hpp"
#include "FrogRiverOneSuite.hpp"
#include "GenomicRangeQuerySuite.hpp"
#include "MaxCountersSuite.hpp"
#include "MaxProductOfThreeSuite.hpp"
#include "MinAvgTwoSliceSuite.hpp"
#include "MissingIntegerSuite.hpp"
#include "OddOccurrencesInArraySuite.hpp"
#include "PassingCarsSuite.hpp"
#include "PermCheckSuite.hpp"
#include "PermMissingElemSuite.hpp"
#include "TapeEquilibriumSuite.hpp"

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv); // Initialize GTest framework
    return RUN_ALL_TESTS(); // Run all tests and return the result
}
