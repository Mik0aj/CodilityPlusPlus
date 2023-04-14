#pragma once
#include <string>
#include <vector>

using namespace std;

namespace genomicRangeQuery{
std::vector<int> solution(std::string &S, std::vector<int> &P, std::vector<int> &Q) {
    int N = P.size();
    int M = S.size();
    std::vector<int> results(N);
    std::vector<int> prefixSumA(M + 1);
    std::vector<int> prefixSumC(M + 1);
    std::vector<int> prefixSumG(M + 1);
    std::vector<int> prefixSumT(M + 1);
    for (int i = 1; i <= M; i++) {
        prefixSumA[i] = prefixSumA[i - 1] + (S[i - 1] == 'A' ? 1 : 0);
        prefixSumC[i] = prefixSumC[i - 1] + (S[i - 1] == 'C' ? 1 : 0);
        prefixSumG[i] = prefixSumG[i - 1] + (S[i - 1] == 'G' ? 1 : 0);
        prefixSumT[i] = prefixSumT[i - 1] + (S[i - 1] == 'T' ? 1 : 0);
    }
    for (int i = 0; i < N; i++) {
        int start = P[i];
        int end = Q[i] + 1;
        if (prefixSumA[end] - prefixSumA[start] > 0) {
            results[i] = 1;
        } else if (prefixSumC[end] - prefixSumC[start] > 0) {
            results[i] = 2;
        } else if (prefixSumG[end] - prefixSumG[start] > 0) {
            results[i] = 3;
        } else {
            results[i] = 4;
        }
    }
    return results;
}
}
