#pragma once
using namespace std;

namespace permCheck{
int solution(vector<int> &A) {
    // Implement your solution here
    int N=A.size();
    vector<bool> B(N+1,false);
    for (int i=0; i<N; i++) {
    int x =A[i];
    if (x<1||x>N||B[x]) {
    return 0;
    }
    B[x]=true;
    }
    return 1;
}
}
