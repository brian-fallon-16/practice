#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A) {
    // sort the vector
    // search for the current number
    // if found an odd number of times, save the number and exit


    vector<int> temp = A;

    //sort the vector
    sort(temp.begin(), temp.end());

    // for(auto x : temp)
    //     cout << x << " ";

    int current = 0;
    int currentIndex = 0;
    int compareIndex = 1;
    int count = 1;

    int result = 0;

    bool done = false;
    bool stillCounting = true;

    // keep going until odd number found
    // first loop cycles through the numbers to search
    while(!done && currentIndex < abs(temp.size()))
    {
        current = temp[currentIndex];
        //cout << "searching for " << current << endl;
        // second loop counts how many times it's found
        compareIndex = currentIndex+1;
        while(stillCounting && compareIndex < abs(temp.size()))
        {
            if(temp[compareIndex] == current)
            {
               // cout << "found target" << endl;
                count++;
            }
            else {
                stillCounting = false;
            }
            compareIndex++;
        }

        // when counting is finished, check the count
        // is it odd? if so exit main loop and return the number we are currently searching for
        // is it even? if so move to the next unique number (at the location of the last number compared), reset the counter

        if(count%2 != 0){
            done = true;
            result = current;
        }
        else {
            count = 1;
        }
        // move to the next number, reset the counting flag
        currentIndex = compareIndex-1;
        stillCounting = true;
    }

    return result;

}
