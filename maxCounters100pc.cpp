#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> solution(int N, vector<int> &A)
{
    vector<int> counters(N);
    int size = abs(A.size());
    int maxElement = 0;
    int currentMax = 0;

    for(int i = 0; i < size; i++)
    {
        int command = A[i];

        if(command > N)
        {
            currentMax = maxElement;
        }
        else
        {
            counters[command-1] = max(counters[command-1], currentMax);
            counters[command-1] += 1;
            maxElement = max(counters[command-1], maxElement);
        }
    }

    for(int i = 0; i < N; i++)
    {
        counters[i] = max(counters[i], currentMax);
    }

    return counters;
}
