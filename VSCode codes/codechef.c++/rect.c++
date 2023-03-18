#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a
#define debug(x) cout<<#x<<' '<<x<<endl;


int main()
{
    int t;cin>>t;while(t--){
        long long int a,b,c,d;cin>>a>>b>>c>>d;

        if(a==c && b==d)    cout<<"YES\n";
        else if(a==b && c==d)    cout<<"YES\n";
        else if(a==d && b==c)    cout<<"YES\n";
        else    cout<<"NO\n";

    }
    return 0;
}