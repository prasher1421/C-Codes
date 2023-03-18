#include <bits/stdc++.h>
using namespace std;




int main(){
    int t;
    cin>>t;
    int waiting=0;
    int a,b;
    while(t--){
        cin>>a>>b;
        a=abs(a);
        b=abs(b);
        
        if(a>b){
            waiting=waiting+2*b;
            waiting = waiting + 2*(a-b) -1;
        }
        else{
            waiting=waiting+2*a;
            waiting = waiting + 2*(b-a) -1;
        }
        cout<<waiting<<endl;
    }
}