#include <stdio.h>
int main()
{
    int a;
    printf("Enter your age \n ");
    scanf("%d",&a);
    if(a<14)
    {
        printf("YOU ARE A KIDD");
    }
    else if(a<18){
        printf("YOU CANNOT VOTE");
    }
    else
    {
        printf("YOU ARE A CHAD");
    }
    

    return 0;
}
