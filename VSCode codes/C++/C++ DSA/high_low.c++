#include <bits/stdc++.h>

using namespace std;

int mod = 1e9+7;
int f(int n,bool odd,int nEven,int nOdd,vector<vector<int>> &dp){

    if(n==0 && !odd)    return 1;
    if(n==0 && odd)    return 0;

    if(dp[n][odd] != -1)    return dp[n][odd];
    
    int pickEven = (nEven * f(n-1,odd,nEven,nOdd,dp)%mod)%mod ;

    int pickOdd = (nOdd * f(n-1,!odd,nEven,nOdd,dp)%mod)%mod;

    return dp[n][odd] = (pickEven + pickOdd)%mod;

}

int main()
{
    
    int low = 1;
    int high = 10;

    int nEven = 0;
    int nOdd = 0;

    int n=2;

    vector<vector<int>> dp(n+1,vector<int>(2,-1));

    
    if(low&1 && high&1){
        nEven = (high - low)/2;
        nOdd = nEven +1; 
    }
    else if(!low&1 && !high&1){
        nEven = (high - low)/2 + 1;
        nOdd = nEven -1; 
    }
    else{
        nEven = (high - low +1)/2;
        nOdd = nEven;
    }

    cout<<nEven<<" even "<<nOdd<<" odd ";

    cout<<f(n,0,nEven,nOdd,dp);

    return 0;
}