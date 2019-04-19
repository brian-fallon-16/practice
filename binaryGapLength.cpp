int solution(int N)
{
    // convert to binary
    // while keeping track of zeros
    // count run unless it's the first zero

    int tmp = N;
    bool firstRun = true;
    int runLength = 0;
    int max = 0;

    string s = "";

    while(tmp > 0)
    {
        if(tmp%2 == 0)
        {
            //s = "0"+s;
            if(!firstRun){
                runLength++;
            }

        }
        else {
            //s = "1"+s;
            if(firstRun) firstRun = false;
            if(runLength > max) max = runLength;
            runLength = 0;
        }

        tmp /= 2;
    }


    //cout << s << endl;

    return max;
}
