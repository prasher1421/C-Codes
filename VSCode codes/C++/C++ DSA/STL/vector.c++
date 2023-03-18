#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define pi (3.14159)
#define sq(a) a*a

//a resizable array contains prebuilt functions like .size() .empty()

int main()
{
    vector<int> hah={1,2,3,4,5,6};
    vector<int> haha(hah);//vector created by cpying another one

    cout<<hah.capacity()<<endl;//space assigned to elements
    cout<<hah.size()<<endl;//number of ele

    hah.push_back(7);
    cout<<hah.capacity()<<endl;//capacity doubled because previous capcity was filled
    cout<<hah.size()<<endl;

    

    hah.push_back(8);
    cout<<hah.capacity()<<endl;
    cout<<hah.size()<<endl;

    cout<<hah.at(2)<<" "<<hah[2]<<endl;
    cout<<hah.front()<<" "<<hah.back()<<endl;

    hah.pop_back();

    haha.clear();

    vector<int> op(5,2);//{2,2,2,2,2} vector created 

    //PRINTING METHODS
    for(int i:op){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int>::iterator hi; //vector<int> type iterator created
    for(hi=hah.begin();hi!=hah.end();hi++){
        cout<<*hi<<" ";
    }


    return 0;
}