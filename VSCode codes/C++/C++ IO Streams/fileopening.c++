#include <bits/stdc++.h>
#include <fstream>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a
//ways to open files 
//using constructor
//using open()

int main()
{
    string s="Nanimo kawate nina omai wa";
    // ofstream out("samplefile.txt");        //write operation
    // out<<s;
    string s2;
    ifstream inp("samplefile.txt");
    //inp>>s2;//only single word ouput/stored
    getline(inp,s2);//single line stored
    cout<<s2;

    return 0;
}