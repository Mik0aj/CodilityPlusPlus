#pragma once 

using namespace std;

namespace maxCounters{
	vector<int> solution(int N, vector<int> &A) {
    vector<int> counters(N, 0);
    int maxCount = 0;
    int lastMaxCount = 0;
    
    for (int i = 0; i < A.size(); i++) {
        int counterIndex = A[i] - 1;
        if (counterIndex < N) {
            counters[counterIndex] = max(counters[counterIndex], lastMaxCount) + 1;
            maxCount = max(maxCount, counters[counterIndex]);
        }
        else {
            lastMaxCount = maxCount;
        }
    }
    
    for (int i = 0; i < N; i++) {
        counters[i] = max(counters[i], lastMaxCount);
    }
    
    return counters;
}
}
