#include <bits/stdc++.h>
#include <set>
#include <algorithm>
using namespace std;

#define pi (3.14159)
#define sq(a) a*a


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string a;
        getline(cin,a);
        set<char> s(a.begin(),a.end());
        
        int size =s.size();

        if(size%2==0){
            if((size-k)<=(n/2)){
                cout<<"yes"<<endl;
            }
            else{cout<<"no"<<endl;}
        }
        else{
            if((size-k)<=(n+1)/2){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"no"<<endl;
            }
        }

    }

    return 0;
}
