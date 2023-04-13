cmake_minimum_required(VERSION 3.10)

project(Codility)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Debug)

# Add test files
set(TEST_FILES
	test.cpp
	../src/AbsDistinct.hpp
	../src/BinaryGap.hpp
	../src/Brackets.hpp
	../src/CodilitySolutions.h
	../src/CountDiv.hpp
	../src/Distinct.hpp
	../src/FrogJmp.hpp
	../src/FrogRiverOne.hpp
	../src/MaxCounters.hpp
	../src/OddOccurrencesInArray.hpp
	../src/PassingCars.hpp
	../src/PermCheck.hpp
	../src/PermMissingElem.hpp
	../src/TapeEquilibrium.hpp
	)

# Include Google Test
find_package(GTest REQUIRED)

# Build the test executable
add_executable(tests ${TEST_FILES})
target_link_libraries(tests gtest gtest_main gmock)
