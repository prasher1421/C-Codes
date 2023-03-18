#include <iostream>
#include <cmath>

using namespace std;


template<class T,class R> //used for generalisation of data type
T maxim(T a, T b)//code that work for any type of data
{
    return a > b ? a :  b;
}
T add(T a , R b){
    return a + b;
}

int main()
{
    cout<<maxim(12,14)<<endl;
    cout<<maxim(12.4f,13.5f)<<endl;
    cout<<maxim("abc","xyz")<<endl;
    cout<<maxim("ayz","xbc")<<endl;
    
    cout<<add(10,12.9)<<endl;//two different data types used in same function

    return 0;
}