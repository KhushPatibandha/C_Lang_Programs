#include<stdio.h>
int main()
{
    int i = 10;
    int *a;
    int **b;

    a = &i;
    b = &a; 

    printf("The value of i is %i", *a);
}