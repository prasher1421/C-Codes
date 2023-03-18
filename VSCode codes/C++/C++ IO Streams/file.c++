#include <bits/stdc++.h>
#include <cmath>
#include <fstream>
using namespace std;

#define pi (3.14159)
#define sq(a) a*a


int main(){
    //ios::in ios::out modes for read only or write only

    ofstream ofs("c+.txt",ios::app); //app to append the content means to add new but not delete old
    //if not existing then new will be created
    ofs<<"Hello Eren Yeager dis"<<endl;
    ofs.close();

    // ifstream inf;
    // inf.open("c++.txt");
    // string str;
    // int x;
    // inf>>str;
    // inf>>x;
    // cout<<str<<" "<<x;
    // if(inf.eof()){
    //     cout<<" End of file reached";
    // }
    // inf.close();

    return 0;
}
