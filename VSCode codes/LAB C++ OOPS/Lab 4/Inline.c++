#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a
class ok{
    public:
        inline double multiply(double x,double y){
            return x*y;
        }
        inline double cube(int a){
            return a*a*a;
        }
};

int main() {
    ok num;
    double n1, n2;
    cout<<"Enter a Number -> \n";
    cin>>n1;
    cout<<"Enter another Number -> \n";
    cin>>n2;
    cout<<"\nMultiplication Product is "<<num.multiply(n1,n2);
    cout<<"\nCube is "<<num.cube(n1);
    return 0;
}
