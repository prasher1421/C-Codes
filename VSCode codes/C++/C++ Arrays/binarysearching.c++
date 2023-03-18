#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int A[]={11,22,33,44,55,66,77,88,99,110};
    int l=0,h=9,key,mid;
    cout<<"enter key ";
    cin>>key;

    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
        {
            cout<<"Found at "<<mid;
            return 0;
        }
        else if(key<A[mid])
        {
            h=mid-1;//
        }
        else{ l=mid+1;}
    }

    cout<<"Not Found";

    return 0;
}