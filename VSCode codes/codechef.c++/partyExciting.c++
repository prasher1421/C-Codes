#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a


int main()
{
    int money, n;
    int A[n];
    int B[n];

    cin>>money>>n;

    for(int i= 0;i<n;i++){
        cin>>A[i];
    }
    for(int i= 0;i<n;i++){
        cin>>B[i];
    }

    map <int,int> mp;
    for(int i=0; i<n ;i++){
        mp.insert({A[i],B[i]});
    }

    map <int,int> map;
    for(auto it:mp){
        map.insert({(int)it.first,(int)it.second});
    }
    
    int sum=0;
    int weight=0;

    // while(true){
    //     if((sum + ))
    // }
    

    return 0;
}