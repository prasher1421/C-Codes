#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a
#define debug(x) cout<<#x<<' '<<x<<endl;


int main()
{
    ifstream obj1("Today.txt");//file to be copied
    ofstream obj2("Copied.txt");//where the content will be pasted
    
    char ch;
    while(!obj1.eof()){
        obj1.get(ch);
        obj2<<ch;
    }
    obj1.close();
    obj2.close();


    return 0;
}