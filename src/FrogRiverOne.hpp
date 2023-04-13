#pragma once
#include <set>

using namespace std;

namespace frogRiverOne{
	int solution(int X, vector<int> &A) {
    // Implement your solution here
    set<int> leaves;
    for(auto a=0 ;a< A.size();a++){
        leaves.insert(A.at(a));
        if(!(leaves.size()-X)){
            return a;
        }
    }
    return -1;
}
}
