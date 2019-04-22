#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> solution(string &S, vector<int> &P, vector<int> &Q)
{
    int stringLength = abs(S.size());
    // prefix sum of counts array
    vector<int> A(stringLength+1);
    vector<int> C(stringLength+1);
    vector<int> G(stringLength+1);
    vector<int> T(stringLength+1);

    vector<int> results;


    // generate prefix sum of the count of each element in S
    // creates an array that allows us to check whether an element has occurred between two points
    for(int i = 1; i <= stringLength; i++)
    {
        A[i] = A[i-1] + (S[i-1] == 'A'?1:0);
        C[i] = C[i-1] + (S[i-1] == 'C'?1:0);
        G[i] = G[i-1] + (S[i-1] == 'G'?1:0);
        T[i] = T[i-1] + (S[i-1] == 'T'?1:0);
    }

    for(int i = 0; i < abs(P.size()); i++)
    {
        if(A[Q[i]+1]-A[P[i]] != 0) results.push_back(1);
        else if (C[Q[i]+1]-C[P[i]] != 0) results.push_back(2);
        else if (G[Q[i]+1]-G[P[i]] != 0) results.push_back(3);
        else if (T[Q[i]+1]-T[P[i]] != 0) results.push_back(4);
    }

    return results;
}
