#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a


int main()
{
    int leap=0,i=1800;
    do{
        if(i%100!=0 || i%400==0){
            i+=4;
            leap++;
        }
        else{
            i=i+4;
            continue;}
        

    }while(i<2000);
    cout<<leap;

    return 0;
}