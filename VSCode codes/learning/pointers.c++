#include<stdio.h>
int main()
{
    int a=76;
    int *ptra = &a;
    int *ptr2=NULL;
    printf("the value of a is %d\n",*ptra);
    printf("the value of a is %d\n",a);
    printf("the address of a is %p\n",&a);
    printf("the address of a is %p\n",ptra);
    printf("the address of pointer to a is %p\n",&ptra);
    printf("the address of garbage is %p\n",ptr2);
    return 0;
}
