#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int A[]={11,22,33,44,55,66,77,88,99};
    int key;
    cout<<"Enter key ";
    cin>>key;
    for(int i=0;i<9;i++)
    {
        if(key==A[i])
        {
            cout<<"Found at "<<i;
            return  0;
        }
        
    }
    cout<<"Not found";
    return 0;
}