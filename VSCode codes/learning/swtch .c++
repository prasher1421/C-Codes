#include <stdio.h>
int main()
{
    int a, m;
    printf("Enter your age \n");
    scanf("%d",&a);

    printf("Enter your marks \n");
    scanf("%d",&m);

    switch (a)
    {
      case 4:
        printf("age is 3");
        switch (m)
        {
        case 45:
            printf("marks 45");
            break;
        
        default:
        printf("marks are not 45");
            break;
        }
        break;
    case 44:
       printf("age is 44");
       break;
    case 22:
       printf("age is 22");
       break;
    
    default:
    printf("age is not .....");
        break;

    }
    return 0;
}
