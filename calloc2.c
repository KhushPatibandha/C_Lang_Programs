#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("How many integers do you want to enter? \n");
    scanf("%i", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for(int i = 0; i < n; i++)
    {
        printf("Enter the value of %i element:\n", i);
        scanf("%i", &ptr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        printf("The value of %i element is %i\n", i, ptr[i]);
    }
}