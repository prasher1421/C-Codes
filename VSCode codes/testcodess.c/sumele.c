#include <stdio.h>

int summation(int arr[]){
    int sum=0;
    for(int i=0; i<10; i++){
        sum+=arr[i];
    }
    return sum;
}

int main(void) {
    int arr[10];
    for(int i=0; i<10; i++){
        scanf("%d",&arr[i]);
    }
    printf("The sum of elements of array is %d",summation(arr));
	// your code goes here
	return 0;
}