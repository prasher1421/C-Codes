#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a


int main()
{
    char a;
    cin>>a;
    char b=toupper(a);
    int c=b-'A';
    // cout<<c;
    switch(c){
        case 0:
            cout<<"Vowel";
            break;
        case 4:
            cout<<"Vowel";
            break;
        case 8:
            cout<<"Vowel";
            break;
        case 14:
            cout<<"Vowel";
            break;
        case 20:
            cout<<"Vowel";
            break;
        default:
            cout<<"Consonant";
            break;
    }
    return 0;
}