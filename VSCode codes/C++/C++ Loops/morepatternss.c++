#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int n=5;

    for ( int i=n;i>0;i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }cout<<endl;

    

    return 0;
}