# CodilityPlusPlus

CodilityPlusPlus is a C++ solution repository for all Codility lessons. It provides C++ solutions for various Codility lessons, which can be used as a reference or starting point for solving Codility programming tasks. All solutions aim for 100% compliton. Codility does not provide clear way to browse previous submitions so this repository was created to easliy view solutions.

## Installation Requirements

To use CodilityPlusPlus, you will need the following:

- C++ compiler that supports C++11 or higher.
- [Google Test (gtest)](https://github.com/google/googletest) library for running the test suite.

## File Structure

The `src/` directory contains all the C++ header files that provide solutions for various Codility lessons. The `test/` directory contains the test suite with a `test.hpp` file containing test cases and a `CMakeLists.txt` file for building the test suite.

Currently implemented solutions:
* AbsDistinct
* BinaryGap
* Brackets
* CountDiv
* Distinct
* FrogJmp
* FrogRiverOne
* MaxCounters
* MaxProductOfThree
* MissingInteger
* OddOccurrencesInArray
* PassingCars
* PermCheck
* PermMissingElem
* TapeEquilibrium
* GenomicRangeQuery


## Usage

To use CodilityPlusPlus, follow these steps:

1. Install the required dependencies, including a C++ compiler and the Google Test library.

2. Build the project according to the `CMakeLists.txt` file in the `test/` directory. You can use CMake to generate the build files and then use a build system.

3. Run the built test suite, filtering for the proper testsuite that corresponds to the lessons you want to test.

For example, using CMake and Make:
```
cd test/
mkdir build
cd build
cmake ..
make
./tests --gtest_filter=<test_suite_name>.*
```

Replace `<test_suite_name>` with the name of the test suite you want to run, e.g., `AbsDistinctSuite`, `BinaryGapSuite`, `BracketsSuite`, etc.

### Tests

Solutions are at least tested for example cases provided by codility lessons. These tests are called `ExampleOne`, `ExampleTwo`, etc. Some solutions contain more custom tests.

## Helping scripts

The project contains helper script named `AddNewProblem.sh`. This script creates new source files in src and test files. It also updates test.cpp to include new test suites.
