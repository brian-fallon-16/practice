vector<int> solution(vector<int> &A, int K)
{
    vector<int> temp = A;

    if(temp.size() != NULL)
    {
        int rotation = K%A.size();
        int length = A.size();

        for(int i = 0; i < rotation ; i++)
        {
            temp[i] = A[length-rotation+i];
        }

        for(int i = rotation; i < length; i++)
        {
            temp[i] = A[i-rotation];
        }

        //cout << rotation << endl;
    }

    return temp;
}
