#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a , b , c;
    cout<<"Enter two numbers for thier division-->";
    cin>>a>>b;
    

    if(b!=0){
        c=a/b;
        cout<<"The quotient is "<<c;

    }
    else{
        cout<<"Denominator is 0 hence Divsion not valid";
    }

    return 0;
}