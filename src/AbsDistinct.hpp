#pragma once
#include <vector>
#include <unordered_set>

using namespace std;

namespace absDistinct{
	int solution(vector<int> &A) {
    // Implement your solution here
    unordered_set<int> seen_abs;
    for (int num : A) {
        seen_abs.insert( abs(num));
    }
    return seen_abs.size();
}
}
