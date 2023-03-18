#include <iostream>
#include <cmath>

using namespace std;

// #define pi (3.14159)
// #define sq(a) a*a
#define v 10 //global

int main()
{
    int x=10;//limited to function
    const int y=10;
    int *ptr =&y;
    // ++*ptr;
    const int *const ptrr=&x;  //both data and ptr constant
    return 0;
}