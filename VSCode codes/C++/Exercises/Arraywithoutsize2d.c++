#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int i=0;
    string str[100];
    while(getline(cin,str[i]))
    {
        i++;
    }
    for(int j=0;j<i;j++)
    {
        cout<<str[j]<<endl;
    }

    int arr[100][100],I;
    for (int k=0; k<i;k++ )
    {
        for (int j=0; j<str[j].size();j++)
        {
            if(str[k][j]==' ')
            {
                I++;
            }
            else{
                arr[k][I]= arr[k][I]*10+ str[k][j]-48;
            }
        }
    }
    for (int j=0; j<i;j++)
    {
        for (int k=0; k<I; k++)
        {
            cout<<arr[j][k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}