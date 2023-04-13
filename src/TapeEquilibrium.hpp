#pragma once 
#include <cstdint>
#include <numeric>
using namespace std;

namespace tapeEquilibrium{

int solution(vector<int> &A) {
    // Implement your solution here
    int sum = accumulate(A.begin(), A.end(), 0);
    int minimalDifference=INT32_MAX;
    int leftSplit=0;
for (int i=0; i<A.size()-1; i++) {
    leftSplit+=A.at(i);
    int rightSplit=sum-leftSplit;
    int diff=abs(leftSplit-rightSplit);
    if (diff<minimalDifference) {
        minimalDifference=diff;
    }
}
return minimalDifference;

}
}
