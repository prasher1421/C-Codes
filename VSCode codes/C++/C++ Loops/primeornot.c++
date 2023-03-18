#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int a;
    cout<<"Enter a number to check whether its prime or not"<<endl;
    cin>>a;
    int count=0;
    for(int i = 2; i<a ; i++)
    {
    
        if(a%i==0)
        {
            count++;
        }

    }
    if(count==0)
    {
        cout<<"Prime number";
    }
    else
    {
        cout<<"Not a prime number";

    }

    return 0;
}