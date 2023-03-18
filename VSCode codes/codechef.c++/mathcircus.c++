#include <bits/stdc++.h>

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

        int mod=k%4;

        if(mod==0){
            cout<<"NO"<<endl;
        }
        if(mod==1||mod==3){
            cout<<"YES"<<endl;
            for(int i=1;i<=n;i=i+2){
                cout<<i<<" "<<i+1<<endl;
            }
        }

        if(mod==2){
            cout<<"YES"<<endl;
            for(int i=1;i<=n;i=i+2){
                if((i+1)%4==2){
                    cout<<i+1<<" "<<i<<endl;
                }
                else{
                    cout<<i<<" "<<i+1<<endl;
                }
            }
        }
    }

    return 0;
}