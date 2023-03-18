#include <iostream>
#include <cmath>

using namespace std;

int* fun ( int size)
{
    int *p=new int[size];
    for(int i =0;i<size ; i++){
        p[i]=i+1;
    }
    return p;                  // return by address
}





int main()
{
    int *ptr= fun(5);    
    cout<<*ptr<<" "<<*(ptr+1)<<" ";
    return 0;
}