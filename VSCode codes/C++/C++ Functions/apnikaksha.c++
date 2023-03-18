#include <iostream>
#include <cmath>

using namespace std;

int  factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int combination(int a, int b){
    return factorial(a)/(factorial(a-b)*factorial(b));
}


//str.length()



int main()
{
    cout<<combination(3,1);

    return 0;
}