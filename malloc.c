#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    // size of operatoe in c
    // printf("The size of int on my pc is %i\n", sizeof(int));
    // printf("The size of int on my pc is %i\n", sizeof(float));
    // printf("The size of int on my pc is %i\n", sizeof(char));
    ptr = (int *)malloc(6 * sizeof(int));
    for(int i = 0; i < 6; i++)
    {
        printf("Enter the value of %i element:\n", i);
        scanf("%i", &ptr[i]);
    }

    for(int i = 0; i < 6; i++)
    {
        printf("The value of %i element is %i\n", i, ptr[i]);
    }
}