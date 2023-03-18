#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a


int main()
{
    string s;
    cin>>s;
    
    vector<char> ok(s.begin(),s.end());
    // for(int i=0;i<s.length();i++){
    //     ok.push_back(s[i]);
    // }
    int scoreA=0;
    int scoreB=0;
    int foulA=0;
    int foulB=0;
    for(int i=0;i<s.length();i++){
        if(ok[i]=='y'){
            scoreA++;
        }
        if(ok[i]=='w'){
            scoreA+=2;
        }
        if(ok[i]=='i'){
            scoreA+=3;
        }
        if(ok[i]=='c'){
            scoreA--;
            foulA++;
        }
        if(ok[i]=='k'){
            scoreA-=2;
            foulA++;
        }
        if(ok[i]=='h'){
            scoreA-=3;
            foulA++;
        }
        if(ok[i]=='Y'){
            scoreB++;
        }
        if(ok[i]=='W'){
            scoreB+=2;
        }
        if(ok[i]=='I'){
            scoreB+=3;
        }
        if(ok[i]=='C'){
            scoreB--;
            foulB++;
        }
        if(ok[i]=='K'){
            scoreB-=2;
            foulB++;
        }
        if(ok[i]=='H'){
            scoreB-=3;
            foulB++;
        }
        if(foulA>=3 || foulB>=3){
            if(foulA==3){
                cout<<2;
                return 0;
            }
            if(foulB==3){
                cout<<1;
                return 0;
            }
        }
    }
    if(scoreA>scoreB){
        cout<<1;
    }
    else if(scoreA<scoreB){
        cout<<2;
    }
    else{cout<<0;}






    return 0;
}