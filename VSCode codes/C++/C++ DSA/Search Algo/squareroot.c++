#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

long long rootsearch(long long x){
    long long s=0;
    long long e=x;
    if(x==0){
        return 0;
    }
    if(x==1){
        return 1;
    }
    long long mid=s+(e-s)/2;
    while (s<=e){
        if(sq(mid)<=x && sq((mid+1))>x){
            return  mid;
        }
        if(sq(mid)<x){
            s=mid+1;
        }
        if(sq(mid)>x){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
}

double moreprecision(long long x,int precision){
    int inte=rootsearch(x);
    double nu = 1;
    double ans;
    for(int i=0;i<precision;i++){
        nu=nu/10;
        for(double n=inte; sq(n)<x; n=n+nu){
            ans=n;
        }
    }
    return ans;
}

int main()
{
    cout<<rootsearch(70)<<endl;
    cout<<moreprecision(48,3);
    return 0;
}