#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int A[2][3]={2,3,4,4,5,5};
    int B[3][2]={3,3,4,5,5,3};
    int C[2][3];
    for (int i=0; i<2;i++)
    {
        for(int j=0; j<3;j++)
        {
            C[i][j]=A[i][j]*B[j][i];
        }
        
    }
    for (int i=0; i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}