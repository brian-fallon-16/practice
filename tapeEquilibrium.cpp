#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A) {
    int totalSum = 0;
    int runningSum = 0;
    int min;

    vector<int>::iterator ptr;

    // get sum

    for (ptr = A.begin(); ptr < A.end(); ptr++) totalSum += *ptr;

    //cout << totalSum << endl;

    min = 2000;
    for(int i = 0; i < abs(A.size()-1); i++)
    {
        runningSum += A[i];
        //cout << runningSum << endl;
        int difference = abs(totalSum-(2*runningSum));
        //cout << difference << endl;
        if(difference < min) min = difference;
    }

    return min;
}
