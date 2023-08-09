#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a
#define debug(x) cout<<#x<<' '<<x<<endl;

int f(int i,int j, vector<int> &a,vector<vector<int>> &dp){

    if(i>=j)    return 0;

    int pickI = a[i];

    if(a[i+1] > a[j]){
        pickI+=f(i+2,j);
    }else{
        
    }

    int pickJ = a[j];

    return max(pickI,pickJ);

}

int main()
{
    vector<int> markers(4);
    markers=[11,20,2,10];

    vector<vector<int>> dp(4,vector<int>(4,-1));



    return 0;
}