#pragma once
#include <string>
#include <vector>
#include <map>

using namespace std;

namespace genomicRangeQuery{
std::vector<int> solution(std::string &S, std::vector<int> &P, std::vector<int> &Q) {
    int N = P.size();
    std::vector<int> results(N);

    for (int i = 0; i < N; i++) {
        int start = P[i];
        int end = Q[i];
        int nucleotide = 4; // Initialize with T

        for (int j = start; j <= end; j++) { // Correctly extract substrings from S
            char nucl = S[j];
            int newNucl = 4; // Initialize with T

            switch (nucl) {
                case 'A':
                    newNucl = 1;
                    break;
                case 'C':
                    newNucl = 2;
                    break;
                case 'G':
                    newNucl = 3;
                    break;
            }

            if (newNucl < nucleotide) {
                nucleotide = newNucl;
            }

            if (nucleotide == 1) {
                break;
            }
        }

        results[i] = nucleotide;
    }

    return results;
}
	
}
