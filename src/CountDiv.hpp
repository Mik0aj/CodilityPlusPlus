#pragma once

namespace countDiv{
	int solution(int A, int B, int K) {
    int numIntegers = (B/K) - (A/K) + (A % K == 0 ? 1 : 0);
    return numIntegers;
}
}
