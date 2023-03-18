#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a


int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n,m;
        cin>>n>>m;
        if(n==1 || m==1){
            if(n==1){
                if(m%2==0){
                    cout<<"Burenka"<<endl;
                }
                else{
                    cout<<"Tonya"<<endl;
                }
            }
            else
            {
                if(n%2==0){
                    cout<<"Burenka"<<endl;
                }
                else{
                    cout<<"Tonya"<<endl;
                }
                
            }
            
        }

        else if(n%2!=0 && m%2!=0){
            cout<<"Tonya"<<endl;
        } 
        else if(n%2==0 && m%2==0){
            cout<<"Tonya"<<endl;
        }
        else{
            cout<<"Burenka"<<endl;
        }
    }

    return 0;
}