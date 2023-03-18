#include <iostream>
#include <cmath>

using namespace std;

double sq(double x){
    return x*x;
}

class Complex{
    private:
        double real;
        double imag;
    public:
        void setreal(double real){
            this->real=real;
        }
        void setimag(double imag){
            this->imag=imag;
        }
        void display();

        Complex(double r=0, double i=0){
        setreal(r);
        setimag(i);   
        }
        Complex(Complex &c){
            setreal(c.real);
            setimag(c.imag);
        }
        Complex  operator+(Complex x){ //add(Complex x){    
            Complex temp;
            temp.real =real + x.real;
            temp.imag=imag + x.imag;
            return temp;

        }

        Complex operator/(Complex x){
            Complex temp;
            temp.real= (real*x.real - imag*x.imag)/(sq(x.real)+sq(x.imag));
            temp.imag= (imag*x.real + real*x.imag)/(sq(x.real)+sq(x.imag));
            return temp;
        }

        friend ostream & operator<<(ostream &o, Complex &c);
        //syntax return type reference of output stream operator to be overloaded
        //as it is kind of binary operator(output stream reference eg a , for what output stream is being used reference )
        // body a<<output to be displayed 
        //return a 
        friend istream & operator>>(istream &a, Complex &c);

};
void Complex::display(){
    cout<<real<<" + i"<<imag<<endl;
}

istream & operator >>(istream &a , Complex &c ){
    a>>c.real>>c.imag;
    return a;
} 
ostream & operator <<(ostream &o,Complex &c){
    o<<c.real<<" + i"<<c.imag<<endl;
    return o;
}

int main()
{
    Complex c(10,10);
    Complex cc(1,2);
    Complex cadd;

    // cadd = c.add(cc);
    // cadd = cc.add(c);
    cadd = c + cc;
    cadd.display();
    Complex cdiv;
    cdiv = c/cc;
    cout<<cdiv;
    Complex chaha;
    cin>>chaha;
    cout<<chaha;
    return 0;
}