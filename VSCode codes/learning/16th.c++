#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,67};
    printf("Value of position 3 of the array is%d\n",arr[3]);
    printf("address of first element%d\n",&arr[0]);
    printf("address of first element%d\n",arr);
    printf("address of second element%d\n",&arr[1]);
    printf("address of second element%d\n",arr + 1);
    //arr--     arr++ are error
    printf("value at address of first element of the array is %d\n",*(&arr[0]));
    printf("value at address of first element of the array is %d\n",*(arr));
    printf("value at address of second elemen of the array is %d\n",*(&arr[1]));
    printf("value at address of second elemen of the array is %d\n",*(arr + 1));






    //char a = '3';
    //char* ptra = &a;
   //printf("%d\n", ptra);
    //printf("%d",ptra +2);

    return 0;
}
