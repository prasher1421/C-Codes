#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a
#define debug(x) cout<<#x<<' '<<x<<endl;

template<class t>
class Generic1{
    private:
        t a,b;
    public:
    Generic1(int a=0 , int b=0){
        this->a=a;
        this->b=b;
    }
    friend void FriendSwap(Generic1<t> &);
};


template<class t>
class Generic2{
    private:
        t a,b;
    void FriendSwap(t *a ,t *b){
        t temp = *a;
        *a = *b;
        *b = temp; 
    }
};


template<class t>
void FriendSwap(Generic1<t> &a){
        t temp = a.a;
        a.a = a.b;
        a.b = temp;
}

int main()
{
    Generic1<int> obj(5,6);
    FriendSwap(obj);

    return 0;
}