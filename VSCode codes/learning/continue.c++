#include <stdio.h>
int main()
{
    int i, age;
    for(i=0; i<10; i++){
        printf("Enter your age%d\n",i);
        scanf("%d",&age);
        /*if (age>10){
            break;
        }*/
        if(age>10){
            continue;
        }
        printf("we have not come across any continue statements");
        printf("we have not come across any continue statements");
        printf("we have not come across any continue statements");
        printf("we have not come across any continue statements");
        printf("hehehehehehehehehehehehehe");
    }
    return 0;
}
