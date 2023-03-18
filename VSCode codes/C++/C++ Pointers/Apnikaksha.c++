#include <iostream>
#include <cmath>

using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    cout<<*arr<<endl;

    int *ptr=arr;
    for(int i=0; i<6; i++ )
    {
        cout<<*(arr+i)<<" ";
        //arr++
        //cout<<*ptr<<" ";
        // ptr++;
    }
    cout<<endl;

    // cout<<'\n'<<*ptr<<endl;

    int a=2;
    int b=4;
    int *aptr = &a;
    int *bptr = &b;

    swap(*aptr,*bptr);
    
    cout<<a<<" "<<b<<endl;



    return 0;
}