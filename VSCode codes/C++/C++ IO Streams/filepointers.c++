#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a
#define debug(x) cout<<#x<<' '<<x<<endl;


int main()
{
    ofstream obj1("Pointers.txt");
    //starting pointer location will be shown
    cout<<obj1.tellp()<<endl;
    obj1<<"Helllooo";
    //pointer location of last letter
    cout<<obj1.tellp()<<endl;
    obj1.seekp(-5,ios::end);
    //pointer location -5 steps from end
    cout<<obj1.tellp()<<endl;
    obj1<<" People";
    obj1.close();

    ifstream obj2("Pointers.txt");
    cout<<obj2.tellg()<<endl;

    obj2.seekg(5,ios::beg);
    cout<<obj2.tellg();

    obj2.close();

    return 0;
}