#include <iostream>
#include <cmath>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int x=10;
    int &y=x;

    x++;
    y++;
    cout<<x<<endl;
    cout<<y<<endl;

    int a;
    a=x;
    x=25;





    return 0;
}