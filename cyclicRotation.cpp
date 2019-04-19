// right rotates the elements in array A by K places

vector<int> solution(vector<int> &A, int K)
{
    vector<int> temp = A;

    // proceed only if the array has stuff in it
    if(temp.size() != NULL)
    {
      // take the modulo of the rotation amount
      int rotation = K%A.size();
      int length = A.size();

      // add the rightmost "rotation"-sized chunk of elements to the start of the temp array
      for(int i = 0; i < rotation ; i++)
      {
          temp[i] = A[length-rotation+i];
      }

      // add the rest of the elements to the end of the temp array
      for(int i = rotation; i < length; i++)
      {
          temp[i] = A[i-rotation];
      }

        //cout << rotation << endl;
    }

    return temp;
}
