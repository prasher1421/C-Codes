#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

template<typename T>
void fun(T p)
{
    p();
}

int main()
{
    // function name=[parameter list](input type){return type or body;}(use for executing);
    [](){cout<<"hello"<<endl;}();
    auto f=[](){cout<<"hello"<<endl;};
    [](int x, int y){cout<<"Sum : "<<x+y<<endl;}(10,5);
    int x=[](int x,int y){return x+y;}(10,5);
    f();

    int s=[](int x,int y)->int{return x+y;}(10,15);

    int a=10;
    int b=5;

    [&a,&b](){cout<<++a<<" "<<++b<<endl;}(); //without reference unchangable
    [&](){cout<<++a<<" "<<++b<<endl;}();

    fun(f);
    return 0;
}