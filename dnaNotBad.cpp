#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

vector<int> solution(string &S, vector<int> &P, vector<int> &Q)
{
    int num_queries = abs(P.size());
    vector<int> answers(num_queries, 0);
    vector<int> impacts('T', 0);

    impacts['T'] = 4;
    impacts['G'] = 3;
    impacts['C'] = 2;
    impacts['A'] = 1;

    // for each query, get relevant section of impact factor string
    for(int i = 0; i < num_queries; i++)
    {
        // min is 4 by default (max possible impact)

        // if A found, min is 1, stop search
        int j = P[i];
        bool done = false;
        int minimum = 4;

        while(!done && j < Q[i]+1)
        {
            if(impacts[S[j]] < minimum) minimum = impacts[S[j]];
            if(minimum == 1) done = true;
            j++;
        }
        // find minimum of this and store in answers array
        answers[i] = minimum;
    }

    return answers;
}
