#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A) {

    vector<int> sorted = A;

    sort(sorted.begin(), sorted.end());

    bool done = false;
    int index = 0;

    while(!done && index < abs(sorted.size()))
    {
        if(sorted[index] != index+1) done = true;
        index++;
    }

    if(done) return 0;
    else return 1;
}
