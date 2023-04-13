#pragma once
using namespace std;

namespace permMissingElem{

int solution(vector<int> &A) {
    long long size = A.size();
    long long sum = (size + 1) * (size + 2) / 2;
    long long vectorSum = 0;
    for (auto a : A) {
        vectorSum += a;
    }
    return static_cast<int>(sum - vectorSum);
}

}
