#include<stdio.h>
int main()
{
    char input;
    float kmsTOmiles=0.621371;
    float inchesTOfoot=0.08333333;
    float cmsTOinches=0.393701;
    float poundTOkgs=0.45392;
    float inchesTOmeters=0.0254;
    float first, second;
    
    while(1){
        printf("Enter the input character. q to quit \n");
        printf("1 kms to miles\n");
        printf("2 inches to foot\n");
        printf("3 cms to inches\n");
        printf("4 pound to kgs\n");
        printf("5 inches to meters\n");
        scanf(" %c",&input);

        
        


        switch(input){
            case 'q':
            printf("Quitting the program...");
            goto end;
                break;

            case '1':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f",&first);
            second = first * kmsTOmiles;
            printf("%f kms is equal to %f miles\n\n\n",first,second);
            break;

            case '2':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f",&first);
            second = first* inchesTOfoot;
            printf("%f inches is equal to %f feet\n\n\n",first,second);
            break;

            case '3':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f",&first);
            second = first* cmsTOinches;
            printf("%f cms is equal to %f inches \n\n\n",first,second);
            break;

            case '4':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f",&first);
            second= first* poundTOkgs;
            printf("%f pounds is equal to %f kgs\n\n\n",first,second);
            break;

            case '5':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f",&first);
            second=first* inchesTOmeters;
            printf("%f inches is equal to %f meters\n\n\n",first,second);
            break;


            default:
                break;
        }

    }

    end:
    return 0;
}
