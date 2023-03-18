#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int a;
    cout<<"Enter a number for its factors"<<endl;
    cin>>a;
    for(int i = 1;i<a+1;i++)
    {
        if(a%i==0)
        {
            cout<<i<<endl;
        }
        else
        {
            continue;
        }
        
    }


    return 0;
}