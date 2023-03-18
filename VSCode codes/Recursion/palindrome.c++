#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int i , int j){

    if(i>=j){
        return true;
    }

    if(str[i]!=str[j])
        return false;
    else
        return checkPalindrome(str, i+1, j-1);

}

int main(){
    string pal = "abbbcccbbba";
    cout<<checkPalindrome(pal,0,10); 
}