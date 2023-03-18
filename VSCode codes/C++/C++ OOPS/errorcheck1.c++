#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

class Room{
    int length;
    int width;

    public:
        Room(){
            length=0;
            width=0;
        }
        Room(int value = 8){
            length=width=8;
        }
        
        void display(){
            cout<<length<<' '<<width;
        }
};


int main()
{
    Room obj;
    obj.display();

    return 0;
}