#include <stdio.h>
int main()
{
    int num, index = 0;
    printf("Enter a no.\n");
    scanf("%d", &num);

    do
    {
        printf("%d\n", index);
        index += 1;
    } while (index < num);

    return 0;
}
