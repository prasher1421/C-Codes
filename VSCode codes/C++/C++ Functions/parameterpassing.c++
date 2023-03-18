#include <iostream>
#include <cmath>

using namespace std;

// void swap(int a,int b)//formal parameter         // call by value
// void swap(int *a , int *b)                          // call by address
void swap(int &a, int &b) // a and b are reference to x and y
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int x=10,y=20;                   //actual parameter
    // swap(&x,&y);  // for address
    swap(x,y);
    cout<<x<<" "<<y<<endl;

    return 0;
}