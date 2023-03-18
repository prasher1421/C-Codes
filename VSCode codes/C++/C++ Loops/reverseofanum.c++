#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int a;
    cout<<"Enter a number to get its reverse"<<endl;
    cin>>a;
    int rev=0;
    for(int i=a ; i>0; )
    {
        
        rev*=10;
        rev+=i%10;
        i=i/10;
        
    }
    cout<<"Reverse of the number entered is "<<rev;
    return 0;
}