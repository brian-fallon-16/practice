#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A)
{
    // calculate prefix sum of A
    int array_size = abs(A.size());
    vector<double> sum_(array_size+1);
    double prev = 0;

    double min_avg = 100000;
    int min_index;

    for(int i = 1; i <= array_size; i++)
    {
        sum_[i] = A[i-1]+prev;
        prev = sum_[i];
    }

    double curr_avg;

    // try slices of size 2 and 3
    // any bigger slices with an optimal value are composed of smaller
    // slices with optimal values
    for(int i = 1; i < 3; i++)
    {
        // calculate average
        for(int j = 1; j <= array_size-i; j++)
        {
            curr_avg = ((sum_[j+i]-sum_[j-1])/(i+1));
            // cout << curr_avg << endl;
            if(curr_avg < min_avg)
            {
                min_avg = curr_avg;
                min_index = j-1;
            }
        }
    }

    // for(auto x : sum_)
    //     cout << x << " ";

    // cout << endl;

    return min_index;
}
