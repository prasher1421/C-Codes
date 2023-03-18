#include<stdio.h>
#include<conio.h>
int main()
{
    char str[50], ch, i;
    printf("Enter any string: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'
           || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I'
           || str[i]=='O' || str[i]=='U')
        {
            str[i] = 'X';
        }
    }
    printf("\nNew String (after replacing vowel with 'X') = %s", str);
    getch();
    return 0;
}