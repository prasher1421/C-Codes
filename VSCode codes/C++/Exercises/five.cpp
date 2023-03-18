#include <bits/stdc++.h>

using namespace std;

class company{
public:
int data;
        company(int a=0){
            data=a;
        }
        company operator + (company const &obj){
            company o1;
            o1.data=this->data+obj.data;
            return o1;
        }
    company operator - (company const &obj2){
        company o2;
        o2.data = this->data-obj2.data;
        return o2;
    }
        int show(){
            return data;
        }
};


int main()
{
    company x(9);
    company y(6);
    company z= x+y;
    cout<<z.show();

    return 0;
}