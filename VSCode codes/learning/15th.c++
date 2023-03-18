#include <stdio.h>
int factorial(int num)
{

    if(num==1||num==0)
    {
        return 1;
    }
    else{
        return(num*factorial(num-1));
    }
}

int main()
{
    int numb;
    printf("Enter a no. you want a factorial of:\n");
    scanf("%d",&numb);
    printf("The factorial of %d is %d",numb,factorial(numb));
    return 0;
}
