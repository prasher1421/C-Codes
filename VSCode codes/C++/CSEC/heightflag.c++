#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a


int main()
{
    long long int a;
    cin>>a;
    if(a==1){
        cout<<"YES";
    }
    while(a!=1){
        if(a%3==0){
            a/=3;
        }
        else if((a-1)%3==0){
            a=(a-1)/3;
        }

        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

    return 0;
}