#pragma once
#include <vector>

namespace missingInteger{
	int solution(vector<int> &A) {
    // Implement your solution here
    const int VALUES =1000001;
    vector<bool> positivesNonOccuring(VALUES,true);
    for (const auto & a :A ){
        if(a>0){        positivesNonOccuring.at(a)=false;
}
    }
    for (auto i = 1;i<VALUES;i++){
        if(positivesNonOccuring.at(i)){
            return i;
        }
    }
}
}
