#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define pi (3.14159)
#define sq(a) a*a


int main()
{
    vector<int> v ={1,3,4,6,6,6,7,7,7};
    //for search operation
    cout<<binary_search(v.begin(),v.end(),0)<<endl;//gives true false only

    //gives lower bound or lower position of element
    cout<<lower_bound(v.begin(),v.end(),6)-v.begin()<<" "<<upper_bound(v.begin(),v.end(),6)-v.begin()-1<<endl;
    //v.begin subtraction is necessary
    //-1 subtraction in the upper bound gives the exact position of last occurence

    int a=3,b=5,c=7;

    cout<<max(a,b)<<" "<<min(a,b)<<" "<<max(max(a,b),c)<<endl;  //finding maximum and minimum

    swap(a,b);//swapping

    string ab="abcd";

    reverse(ab.begin(),ab.end()-1); //reversing string
    cout<<ab<<endl;

    //rotating vector
    rotate(v.begin(),v.begin()+3,v.end());//center part is index of new starting index of rotated array

    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;


    sort(v.begin(),v.end(),greater<int>());  //sorting uses INTRO SORT -- quick sort + heap sort + insertion sort

    for(int i:v){
        cout<<i<<" ";
    }


    return 0;
}