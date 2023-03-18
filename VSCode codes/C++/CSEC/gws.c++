#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

#define pi (3.14159)
#define sq(a) a*a


int main()
{
    int a,b,g,w,s;
    cin>>a>>b;

    char C[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int i = 0; i < b; i++)
        {
            cin>>C[a][b];
        }
        
    }

    if(a%3==0 || b%3==0){
        if(a%3==0){
            vector<char> v;

            for(int i=0;i<a;i++){
                v.push_back(C[i][0]);
            }
            g = count(v.begin(),v.end(),'G');
            w = count(v.begin(),v.end(),'W');
            s = count(v.begin(),v.end(),'S');

            if(g==w && w==s){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
        }
        else{
             vector<char> ve;

            for(int i=0;i<a;i++){
                ve.push_back(C[i][0]);
            }
            g = count(ve.begin(),ve.end(),'G');
            w = count(ve.begin(),ve.end(),'W');
            s = count(ve.begin(),ve.end(),'S');

            if(g==w && w==s){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
        }

    }
    else{
        cout<<"NO";
    }
    

    return 0;
}