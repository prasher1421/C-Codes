#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a
#define debug(x) cout<<#x<<' '<<x<<endl;

class MyException : public exception//built in class in c++
{
    public:
        // char * what(){
        //     return 'a';
        // }
};



int division(int x, int y) //throw()//empty bracket means it doesnt throw anything //throw(int) 
//type of value it is throwing
{
    if(y==0)
        throw MyException();//actual value thrown
    return x/y;
}

int main()
{
    int a =10, b=0,c;
    try
    {
        c= division(a,b);
    }
    catch(MyException e)//this block catches a value of MyException type
    {
        cout<<"Hahahahaha";
    }
    
    

    

    return 0;
}