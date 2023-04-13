#pragma once

namespace binaryGap{
int solution(int N) {
    // Implement your solution here
    bool flagFirstOne= false;
    bool flagZero= false;
    bool lastOne=false;
    int max{0};
    int counter={0};
    for ( int i = 0; i<sizeof(int)*8;i++){
        bool bit=((N>>i)&1);
        if(bit){
            if (!flagFirstOne) {
                flagFirstOne=true;
            }
            if (!lastOne) {
                lastOne=true;
            }
            if (flagFirstOne&&lastOne&&flagZero) {
                flagZero=false;
                lastOne=false;
                if(counter>max){
                max=counter;
                }
                counter=0;
            }
        }
        else {
        if (flagFirstOne) {
            counter++;
            }
        flagZero=true;
        }
        

    }
            return max;

}
}
