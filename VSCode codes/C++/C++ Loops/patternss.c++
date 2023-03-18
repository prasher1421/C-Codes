#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int  n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        int spaces=2*n-2*i;
        for(int j=1; j<=spaces; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for (int i=n;i>0;i--)
    {
        for (int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        int spaces=2*n-2*i;
        for(int j=1; j<=spaces; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}