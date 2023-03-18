#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int A[5]={2,4,6,8,10};
    int *q=&A[3];
    int *p=A;
    cout<<*p<<endl;

    p++;
    cout<<*p<<endl;

    ++p;
    cout<<*p<<endl;

    p+=2;
    cout<<*p<<endl;

    p-=4;

    cout<<q-p<<endl;
    cout<<p-q<<endl;



    return 0;
}