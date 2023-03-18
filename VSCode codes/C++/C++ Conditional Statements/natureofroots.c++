#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    float a, b, c, d;
    
    cout<<"Enter a,b,c of the quadratic equation--> ";
    cin>>a>>b>>c;
    d=b*b - 4*a*c;

    if(d==0){
        cout<<"Roots are real and equal";
    }
    else{

        if(d>0){
            cout<<"Roots are real and distinct";
        }

        else{
            cout<<"Roots are imaginary and distinct";
        }
    }

    return 0;
}