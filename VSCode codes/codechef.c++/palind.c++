#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a
#define debug(x) cout<<#x<<' '<<x<<endl;


int main()
{
    int t;cin>>t;while(t--){
        string s;cin>>s;

        // int length =s.length();

        // vector<int> a ;
        map<int,int> m;
        int x;
        for(int i=0;i<s.length();i++){
            x = (int) s[i];
            m[x]++;
        }

        int countmoves=0;
		int num;
		
        for(auto i : m){
			num = i.second;
            if(num%2!=0)   countmoves++;//debug(countmoves);  
        }
        cout<<(countmoves-1)<<endl;

    }

    return 0;
}