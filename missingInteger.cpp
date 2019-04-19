#include <bits/stdc++.h>
using namespace std;

// finds the lowest integer not present in an array

// sort the array
// ignore any negative numbers
// ignore any elements that have already been checked
// look for a gap between elements in the sorted array of greater than 1 - if this is found exit the loop
//

int solution(vector<int> &A) {
    // default smallest integer so far (less 1)
    int smallest = 0;
    int current = 0;
    bool done = false;
    int index = 0;

    vector<int> sorted = A;

    // sort the array in ascending order
    sort(sorted.begin(), sorted.end());

    // while the gap hasn't been found and the end of the array hasn't been reached
    while(!done && index < abs(sorted.size()))
    {
        current = sorted[index];
        // is this element worth checking? will ignore negative elements
        if(current > smallest)
        {
            // if so check the gap between it and the smallest so far
            // if it's more than 1 we've found out gap, exit the loop
            // otherwise update the smallest positive integer not found so far (minus 1)
            if(current-smallest > 1)
            {
                done = true;
            }
            else smallest = current;
        }

        index++;
    }

    // add 1 to this variable to get smallest integer so far
    smallest++;

    return smallest;
}
