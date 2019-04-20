// given X (start point), Y (end point), and D (distance of jump)
// X <= Y, all integers are between 1 and 10000000
// find the minimum number of jumps needed to get to or beyond Y


#include <math.h>

int solution(int X, int Y, int D)
{
    // find the minimum distance needed to jump (Y-X)
    // find exactly how many jumps needed to get there (divide by D)
    // round up to nearest int for result
    return int(ceil(double(Y-X)/double(D)));

}
