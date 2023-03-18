#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int *A[1000],   i=0,   sizeofA=0;
    while(true){
        A[i] = new int;
        cin >> *A[i];
        if(cin.get()=='\n')
        {
            break;
        }
        i++;
        sizeofA++;
    }
    for(int j=0;j<=sizeofA;j++)
    {
        cout<< *A[j] << " ";
    }

    return 0;
}