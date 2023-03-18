#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
    //declaring methods
    string str = "ApniKaksha";
    // string str1(4,'a');
    // cout<<str1;

    // getline(cin,str);
    // cout<<str<<endl;

    string s1="fam"; 
    string s2="ily";

    // s1.append(s2);
    cout<<s1+s2<<endl;

    cout<<s1[1]<<endl;

    str.clear();
    cout<<str;

    cout<<s2.compare(s1)<<endl;//if 0 strings are equal

    string s3="absanabs";
    //s3.clear();
    if(!s3.empty()){
        cout<<"String is not empty"<<endl;
    }

    string s4="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // s4.erase(1, 4);
    // cout<<s4<<endl;

    cout<<s4.find("BCD")<<endl;

    s4.insert(26," YES");
    cout<<s4<<endl;

    int a=s4.size();
    int b=s4.length();
    for(int i=0; i<a; i++){
        cout<<s4[i]<<" ";
    }

    string tota=s4.substr(27,3);
    cout<<tota<<endl;


    string num="21090";
    int x=stoi(num);       //        string to integer

    string s5 = to_string(b);    //   int to string

    string s6 ="kgjyfxdvvcbaeilmopqsuznhbjgytrd";
    sort(s6.begin(), s6.end());
    cout<<s6<<endl;

    return 0;
}