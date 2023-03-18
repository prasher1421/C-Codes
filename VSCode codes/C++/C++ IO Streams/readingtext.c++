#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a
#define debug(x) cout<<#x<<' '<<x<<endl;


int main()
{
    fstream obj("Today.txt",ios::in);

    //to read character by character
    // char ch;
    // while(!obj.eof()){
    //     obj.get(ch);
    //     cout<<ch;
    // }
    // obj.close();

    //to read word by word
    // char word[15];
    // while (!obj.eof())
    // {
    //     obj>>word;
    //     cout<<word<<" ";
    // }
    // obj.close();

    //to read line by line
    char line[80];
    while(!obj.eof()){
        // obj.getline(line,80);
        // obj.getline(line,80,'u');//u character must be skipped
        obj.read(line,60);//will read 60 characters from file
        cout<<line<<endl;
    }
    obj.close();
    


    return 0;
}