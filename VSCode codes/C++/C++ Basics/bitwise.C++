#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //int x=11, y=5,z;
    char x=5,y;

    y=x>>2; //right shift
    int z;
    z=x^y;// 1+1=0  0+1 =1  0+0=0
    z=x|y;// perform or on them
    z=x&y; //take x and y in binary and perform add or and on them
    cout<<z<<endl;
    cout<<(int)y<<endl;




    return 0;
}
