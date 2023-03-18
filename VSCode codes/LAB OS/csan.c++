#include <bits/stdc++.h>
using namespace std;

int size = 8;
int disksize = 100;

void C_SCAN(int arr[],int head)
{
   int seek_count=0;
   int distance,currentTrack;

   vector<int> rightOfHead,leftOfHead,seek_sequence;

   leftOfHead.push_back(0);
   rightOfHead.push_back(199);

   for (int i = 0; i < size; i++)
   {
        if(arr[i]<head)
        {
            leftOfHead.push_back(arr[i]);
        }

        if(arr[i]>=head)
        {
            rightOfHead.push_back(arr[i]);
        }
   }

    sort(leftOfHead.begin(), leftOfHead.end());
    sort(rightOfHead.begin(), rightOfHead.end());

    for (int i = 0; i < rightOfHead.size(); i++)
    {
        currentTrack=rightOfHead[i];

        seek_sequence.push_back(currentTrack);

        distance=abs(currentTrack-head);

        seek_count+=distance;

        head=currentTrack;
    }

    head = 0;
    seek_count+=199;

    for (int i = 0; i < leftOfHead.size(); i++)
    {
        currentTrack=leftOfHead[i];

        seek_sequence.push_back(currentTrack);

        distance=abs(currentTrack-head);

        seek_count+=distance;

        head=currentTrack;
    }
    
    
    cout << "number of seek operations = "
         << seek_count << endl;
  
    cout << "Seek Sequence is" << endl;
  
    for (int i = 0; i < seek_sequence.size(); i++) {
        cout << seek_sequence[i] << endl;
    }
}

int main()
{
    int arr[size] = { 176, 79, 34, 60, 92, 11, 41, 114 };
    int head = 50;
  
    cout << "Initial position of head: " << head << endl;
    C_SCAN(arr, head);

    return 0;
}