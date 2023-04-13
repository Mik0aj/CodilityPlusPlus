#pragma once 
#include <algorithm>

using namespace std;

namespace distinct{
	int solution(vector<int> &A) {
    // Implement your solution here
    int N=A.size();
    if (N==1) {
    return 1;
    }
    else if(N==0){
    return 0;
    }
    sort(A.begin(),A.end());
    int distinct=0;
    for(auto a = A.begin();a!=A.end() ;a++){
        if (*a!=*(a+1)) {
         distinct++;
        }
    }
    return distinct;
}
}
