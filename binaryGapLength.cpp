// calculates the longest gap of zeros in the binary representation of a number

int solution(int N)
{
    // convert to binary
    // while keeping track of zeros
    // count run unless it's the first zero

    // variable to hold divided N
    int tmp = N;
    // this is a flag to indicate a run of zeros that should be ignored
    // this being a run of zeros at the end of the binary representation
    // which is not bounded on both sides by 1s
    bool firstRun = true;
    int runLength = 0;
    int max = 0;

    // string to view output of binary conversion
    string s = "";

    while(tmp > 0)
    {
        // if remainder of N/2 is zero, add zero to binary representation
        // increment run length if it's not an end run of zeros
        if(tmp%2 == 0)
        {
            //s = "0"+s;
            if(!firstRun){
                runLength++;
            }

        } // otherwise add a one and reset the counter. update the max length if necessary
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
