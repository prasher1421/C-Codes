#include <iostream>
#include <cmath>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

template<class t>
class stack
{
    private:
        t s[10];
        int top;
        int size;
    public:
        void push(t x);
        t pop();
};

template<class t>//we have to give template for each function created outside
void stack<t>::push(t x){//whenever class stack is used it is used with stack<t>
} 
template<class t>
t stack<t>::pop(){
}

int main()
{
    stack<int> s;//everytime we have to specify data type
    stack<float> f;

    return 0;
}