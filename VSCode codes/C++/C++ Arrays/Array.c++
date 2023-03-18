#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    float A[5]={123,1234,12345};

    for (int i=0;i<5;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    for(int x:A)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    char B[]={'A',66,'C',69};
    for(auto y:B)
    {
        cout<<y<<" ";
    }
    cout<<endl;
    return 0;
}