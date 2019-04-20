// given an array of size N containing unique elements in the range [1..N+1]
// this means one element is missing
// this finds the missing element

#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A)
{
    // sort the array in ascending order
    vector<int> sorted = A;
    sort(sorted.begin(), sorted.end());

    bool found = false;
    int index = 0;
    int result;
    int arraySize = abs(sorted.size());


    // look for mismatches between the index and the number stored at that index
    // if no mismatch is found then the result is N+1

    // keep going until end of array found
    while(!found && index < arraySize)
    {
        // check if the index matches, if it doesn't we are done
        if(sorted[index] != index+1)
        {
            found = true;
            //result = index+1;
        }
        index++;
    }

    // if end of array and not found then the result is = size of array+1

    if(!found) result = arraySize+1;
    else result = index;

    return result;
}
