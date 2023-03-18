#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

long long int sum(int n,...)
{
    va_list list;
    va_start(list,n);
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=va_arg(list,int);
    }
    va_end(list);
    return s;
}

int main()
{
    long long int a=sum(129,37,39,276,87,737,82,23,90,2);
    cout<<a;
    return 0;
}