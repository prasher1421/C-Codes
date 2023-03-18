#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a
#define debug(x) cout<<#x<<' '<<x<<endl;

class Count{
    private: 
        int value;
    public:
        Count(int x = 0){
            value = x;
        }

        void operator++(){//to overload prefix ++ no parameter required
            ++value;
        }

        void operator ++(int){//to overload postfix ++ operator int as parameter required
            value+=2;
        }

        friend int operator == (Count a , Count b);

        void display(){
            cout<<value<<endl;
        }
};

int operator == (Count a , Count b){
    if(a.value == b.value){
        return 1;
    }
    return 0;
}

int main()
{
    Count f(8);
    ++f;
    f.display();

    f++;
    f.display();

    Count f1(10);
    Count f2(11);

    bool fbool= f1==f2;
    cout<<fbool<<endl;


    return 0;
}