#include <bits/stdc++.h>
using namespace std;

int solution(int X, vector<int> &A)
{
    bool *position = new bool[X];

    // set the positions array to false
    for(int i = 0; i < X; i++)
    {
        position[i] = false;
    }

    // look through the array of times
    // set the positions as their found
    // as soon as all positions are found save the index and exit

    int index = 0;
    bool found = false;
    //int earliest = 0;
    int positionsLeft = X;

    while(!found && index < abs(A.size()))
    {
        int currentPos = A[index]-1;

        // if the positon at the current second is unset, set it and decrement the countdown
        // otherwise move on
        if(position[currentPos] == false)
        {
            position[currentPos] = true;
            positionsLeft--;
            //cout << "setting position " << A[index] << endl;
            //cout << "number of positions left: " << positionsLeft << endl;
        }

        if(positionsLeft == 0) found = true;
        else index++;
    }


    if(!found) return -1;
    else return index;

}
