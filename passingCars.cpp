#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// find where the zeros are
// find how many ones there are beyond the first zero
// for each zero, increment total by number of valid ones left
// decrement number of valid ones by the size of the gaps between the zeros

int solution(vector<int> &A)
{
    int arraySize = A.size();
    vector<int> zeroIndices;
    int numZeros = 0;
    int maxOnes = 0;
    int totalPairs = 0;
    bool zeroFound = false;

    // find indices of zeros
    for(int i = 0; i < arraySize; i++)
    {
        if(A[i] == 0)
        {
            zeroIndices.push_back(i);
            if(!zeroFound) zeroFound = true;
        }
    }

    // number of useful ones is ((size of array - first zero index) - numZeros)

    // if there are zeros, log the number of them
    // if not return zero pairs
    if(zeroFound) numZeros = zeroIndices.size();
    else return 0;

    maxOnes = arraySize-numZeros-(zeroIndices[0]);

    // cout << maxOnes << endl;



    int i = 0;
    bool limitExceeded = false;
    int prev = zeroIndices[0];

    while(i < numZeros && !limitExceeded)
    {
        // update maxOnes
        if(zeroIndices[i]-prev > 1) maxOnes -= (zeroIndices[i]-prev-1);
        totalPairs += maxOnes;
        prev = zeroIndices[i];

        if(totalPairs > 1000000000) limitExceeded = true;
        i++;
    }


    // for(auto x : zeroIndices)
    //     cout << x << " ";

    // cout << endl;

    if(limitExceeded) return -1;
    else return totalPairs;
}
