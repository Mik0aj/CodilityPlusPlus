#pragma once 
using namespace std;

namespace passingCars{
int solution(vector<int> &A) {
    // Implement your solution here
    int eastHeadingCars(0);
    int pairs(0);
    for(auto &a:A){
        if (a==0) {
        eastHeadingCars++;
        }
        if (a==1) {
        pairs+=eastHeadingCars;
        }
        if (pairs>1000000000) {
        return -1;
        }
    }
    return pairs;
}
}

