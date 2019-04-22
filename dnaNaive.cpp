#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> solution(string &S, vector<int> &P, vector<int> &Q)
{
    vector<int> answers;
    vector<int> impacts;
    int num_queries = abs(P.size());

    // convert S into a string of impact factors

    for(int i = 0; i < abs(S.size()); i++)
    {
        switch(S[i]) {
            case 'A' : impacts.push_back(1);
            break;
            case 'C': impacts.push_back(2);
            break;
            case 'G': impacts.push_back(3);
            break;
            case 'T': impacts.push_back(4);
            break;
        }
    }

    // for( auto x : impacts)
    //     cout << x << " ";

    //cout << endl;

    // for each query, get relevant section of impact factor string
    for(int i = 0; i < num_queries; i++)
    {
        vector<int>::iterator start = impacts.begin();
        vector<int>::iterator end = impacts.begin();

        advance(start, P[i]);
        advance(end, Q[i]);
        // find minimum of this and store in answers array
        answers.push_back(*min_element(start, end));
    }

    return answers;
}
