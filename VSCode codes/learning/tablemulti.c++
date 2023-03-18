#include <stdio.h>
//print a multiplication table
int main()
{
    int a, i;
    printf("Enter a no. you want multiplication table of \n");
    scanf("%d",&a); 
    for(i=0; i<11;++i)
    {
        printf("%d X %d = %d\n",a,i,a*i);
    }
    return 0;
}
