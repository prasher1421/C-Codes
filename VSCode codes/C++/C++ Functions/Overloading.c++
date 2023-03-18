#include <iostream>
#include <cmath>

using namespace std;

int sum(int a, int b)
{
    return a+b;
}
float sum(float a, float b)
{
    return a+b;
}
int sum(int a, int b, int c)
{
    return a+b+c;
}





int main()
{
    cout<<sum(1,2)<<endl;
    cout<<sum(1.2f,2.5f)<<endl;
    cout<<sum(1,44,99)<<endl;
    

    return 0;
}