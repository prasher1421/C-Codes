#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a
#define debug(x) cout<<#x<<' '<<x<<endl;

class Polynomial{
    float a,b,c;
    float root1 = 0,root2 = 0;
    float greaterroot = 0;
    float discriminant;
    public:

        void roots(){
            if(discriminant>=0){
                root1 = (-b + sqrt(discriminant))/(2*a);
                root2 = (-b - sqrt(discriminant))/(2*a);
                greaterroot = (root1 > root2) ? root1 : root2 ;

                // cout<<root1<<" "<<root2<<endl;
            }
            else{
                cout<<"Roots for this polynomial does not exist \n";
            }
        }

        Polynomial(float x=0 , float y=0, float z=0){
            this->a=x;
            this->b=y;
            this->c=z;

            discriminant = b*b - (4*a*c);

            // debug(discriminant);

            // debug(a);
            // debug(b);
            // debug(c);
        }


        friend int operator > (Polynomial a , Polynomial b); // compares polynomial on the basis of roots

};

int operator > (Polynomial a , Polynomial b){
    if(a.discriminant>=0 && b.discriminant>=0){
        if(a.greaterroot > b.greaterroot){
            // cout<<a.greaterroot<<" "<<b.greaterroot;
            return 1;
        }
        return 0;
    }
}

int main()
{
    // Polynomial f(1);
    Polynomial a(1,2,1);
    Polynomial g(1,-6,9);
    g.roots();
    a.roots();
    
    bool aa = a>g;
    bool aaa = g>a;
    cout<<aa<<endl;
    cout<<aaa<<endl;

    return 0;
}