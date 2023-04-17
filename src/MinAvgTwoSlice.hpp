#pragma once
#include <iostream>
#include <vector>
#include <utility> // for std::pair
#include <limits> // for INT_MAX

namespace minAvgTwoSlice{
    int solution(std::vector<int> &A){
        std::pair<double,int> twoPosSlice(std::numeric_limits<double>::max(),-1);
        std::pair<double,int> threePosSlice(std::numeric_limits<double>::max(),-1);
        std::vector<int> prefixSum(A.size() + 1); // increased size to include prefix sum at index 0
        int currentSum=0;
        for(int i=0;i<A.size();i++){
            currentSum+=A.at(i);
            prefixSum.at(i+1)=currentSum; // storing prefix sum at index i+1
        }
        for(int i=1;i<A.size();i++){
            double average=(static_cast<double>(prefixSum.at(i+1))-prefixSum.at(i-1))/2; // corrected average calculation
            if (twoPosSlice.first>average){
                twoPosSlice.first=average;
                twoPosSlice.second=i-1;
            }
        }
        for(int i=2;i<A.size();i++){
            double average=(static_cast<double>(prefixSum.at(i+1))-prefixSum.at(i-2))/3; // corrected average calculation
            if (threePosSlice.first>average){
                threePosSlice.first=average;
                threePosSlice.second=i-2;
            }
        }
        if (twoPosSlice.first<threePosSlice.first){
            return twoPosSlice.second;
        }
        return threePosSlice.second;
    }
}
