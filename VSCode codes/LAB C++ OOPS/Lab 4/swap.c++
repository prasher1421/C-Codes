#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

void swap(int &x, int &y){
    int temp;
    temp=y;
    y=x;
    x=temp;
}

int main()
{
    int a = 10, b = 20;
    swap(a,b);
    cout<<a<<" "<<b;

    return 0;
}