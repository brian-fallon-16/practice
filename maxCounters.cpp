#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int N, vector<int> &A)
{
    vector<int> counters;
    int size = abs(A.size());
    int max = 0;

    for(int i = 0; i < N; i++)
    {
        counters.push_back(0);
    }

    for(int i = 0; i < size; i++)
    {
        int command = A[i];

        if(command > N)
        {
            // set all counters to max
            for(int i = 0; i < N; i++)
            {
               counters[i] = max;
            }
        }
        else {
            // increment counter pointed to by command
            // update max if necessary
            counters[command-1]+=1;
            if(counters[command-1] > max) max = counters[command-1];
        }

        // for (auto x : counters)
        //     cout << x << " ";

        // cout << endl;
    }

    return counters;
}
