#include<stdio.h>
int main()
{
    int marks[4];
    /*for(int i=0; i<4;i++)
    {
        printf("Enter the value of %d element of the array\n",i);
        scanf("%d",&marks[i]);
    }
    marks[0]=34;
    printf("maRKS OF student 1 is %d\n",marks[0]);
    marks[0]=455;
    marks[1]=478;
    marks[2]=445;
    marks[3]=496;
    marks[4]=456;
    printf(marks);*/
    
    int mark[2][4]={{1,2,3,4},{5,6,7,8}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ",mark[i][j]);
            //printf("The value of %d,%d element of the array is %d\n", i,j,mark[i][j]);
        }
        printf("\n");
    }
    




    return 0;
}
