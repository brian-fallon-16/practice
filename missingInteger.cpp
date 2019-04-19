#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A) {
    int smallest = 0;
    int current = 0;
    bool done = false;
    int index = 0;

    vector<int> sorted = A;

    sort(sorted.begin(), sorted.end());


    while(!done && index < abs(sorted.size()))
    {
        current = sorted[index];
        if(current > smallest)
        {
            if(current-smallest > 1)
            {
                done = true;
            }
            else smallest = current;
        }

        index++;
    }


    smallest++;

    return smallest;
}
