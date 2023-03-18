#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    printf("If you passed the following subjects then enter\n MATHS:1\n SCIENCE:2\n IF BOTH THEN ENTER:3\n");
    scanf("%d",&a);
    if(a==1){
        printf("YOUR PRIZE IS 5$");
    }
    else if(a==2){
        printf("YOUR PRIZE IS 6$");
    }
    else if(a==3){
        printf("YOUR PRIZE IS 15$");
    }
    else{
        printf("YOU NOOB CALL YOUR PARENTS");
    }
    return 0;
}
