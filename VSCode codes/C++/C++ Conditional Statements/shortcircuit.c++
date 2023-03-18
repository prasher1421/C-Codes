#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    if(4>2||2<0/0)
    {// ^only this condition is checke and second condition is ignored bcz result will be true whatever the case for second condition     
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO";
    }



    if(4<2&&2/0>0/0)//****if(false) hence go for else
    {
        cout<<"YEAH";
    }
    else
    {
        cout<<"NOPE";    
    }
    
    return 0;
}