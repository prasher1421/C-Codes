#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a
#define debug(x) cout<<#x<<' '<<x<<endl;


int main()
{
    int a=10 , b=0  ,c;
    try
    {
        if(b==0)    throw 101;
        if (a==10)  throw 101.5;

        
    }
    catch(int e)
    {
        cout<<"Error "<<e<<endl;
    }
    catch(float e)
    {
        cout<<"Error "<<e<<endl;
    }
    catch(...)//ellipse catches all excpetions
    {

    }
    

    return 0;
}