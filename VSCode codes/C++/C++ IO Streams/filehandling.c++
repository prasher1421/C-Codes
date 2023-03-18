#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

#define pi (3.14159)
#define sq(a) a*a
#define debug(x) cout<<#x<<' '<<x<<endl;


int main()
{
    fstream obj("Today.txt",ios::app);
    char sentence[40] = "Hey Who Are You?";
    int len = strlen(sentence);
    for(int i = 0; i<len;i++){
        obj.put(sentence[i]);
        //character by character inserted into file
    }
    obj<<endl;
    obj.write(sentence,len);

    return 0;
}