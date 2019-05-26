#include <iostream>

using namespace std;

int solution(int A, int B, int K)
{
    int min_value = ((A+(K-1))/K)*K;

    if(min_value > B) return 0;

    return ((B-min_value)/K)+1;
}
