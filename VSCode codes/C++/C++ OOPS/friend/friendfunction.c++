#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a
#define debug(x) cout<<#x<<' '<<x<<endl;

class A{
    int a;
    public:
        int b=8;

        friend void func(A &);
        void func2(A &);
};

void func(A &x){
    x.a = 10;
    x.b = 10;
    cout<<x.a<<endl;
}
void A::func2(A &x){
    x.a=11;
    cout<<x.a<<endl;
}

int main()
{
    A obj;
    func(obj);
    obj.func2(obj);
    

    return 0;
}