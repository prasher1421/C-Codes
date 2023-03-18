#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

// void display()
// {
//     cout<<"YOUYOYOYOYYOOYOYOYOYOYOOYOYOYOYOYYO";
// }

int max(int x, int y)
{
    if(x>y)
    {
        return x;
    }
    return y;
}

int min(int x , int y){
    if(x<y){
        return x;
    }
    return y;
}


int main()
{
    //void(*fp)();      //declaration
    // fp=display;       //initialisation
    //(*fp)();          //call
    
    int (*xp)(int,int);
    xp=&max;
    cout<<(*xp)(10,5)<<endl;

    xp=&min;
    cout<<(*xp)(10,5)<<endl;


    return 0;
}