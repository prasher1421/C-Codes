#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a


int main()
{
    int **matrix; //pointer to pointer to allocate memory 2 times

    int row,column;

    matrix= new int*[row]; //memomory allocated once 

    for(int i=0;i<row;i++){
        row = new int[column]; // memory allocated per row
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>matrix[i][j];
        }
    }



    return 0;
}