#pragma once
#include <vector>

using namespace std;

namespace maxProductOfThree{
int solution(vector<int> &A) {
    int max1 = INT32_MIN, max2 = INT32_MIN, max3 = INT32_MIN;
    int min1 = INT32_MAX, min2 = INT32_MAX;
    
    for (int i = 0; i < A.size(); i++) {
        int val = A[i];
        
        if (val >= max1) {
            max3 = max2;
            max2 = max1;
            max1 = val;
        } else if (val >= max2) {
            max3 = max2;
            max2 = val;
        } else if (val >= max3) {
            max3 = val;
        }
        
        if (val <= min1) {
            min2 = min1;
            min1 = val;
        } else if (val <= min2) {
            min2 = val;
        }
    }
    
    return max(max1 * max2 * max3, max1 * min1 * min2);
}
}
