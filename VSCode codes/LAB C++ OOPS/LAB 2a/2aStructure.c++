#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

struct complex
{
    double real;
    double imaginary;

};

void read( complex *struc){
    cin>>(*struc).real>>(*struc).imaginary;
}

void display(complex *struc){
    cout<<(*struc).real<<" + i"<<(*struc).imaginary;
}

complex add(complex *struc, complex *strucc){
    complex temp;
    // cout<<((*struc).real + (*strucc).real)<<" + i"<<((*struc).imaginary) + (*strucc).imaginary);
    temp.real=(*struc).real + (*strucc).real;
    temp.imaginary=(*struc).imaginary) + (*strucc).imaginary;
    return (temp);
}

complex subt(complex *struc, complex *strucc){
    complex temp;
    // cout<<((*struc).real + (*strucc).real)<<" + i"<<((*struc).imaginary) + (*strucc).imaginary);
    temp.real=(*struc).real - (*strucc).real;
    temp.imaginary=(*struc).imaginary) - (*strucc).imaginary;
    return (temp);
}


int main()
{
    complex *a,*b;
    read(a);
    read(b);

    display(a);
    display(b);

    return 0;
}