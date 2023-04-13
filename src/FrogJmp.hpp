#pragma once
#include <math.h>

namespace frogJmp{
int solution(int X, int Y, int D) {
    return ceil((double)(Y - X) / D);
}
}
