#include<stdio.h>
int printadd(int a);
int main()
{
    int i;
    printf("The address of i is %u\n", &i);
    printadd(i);
}

int printadd(int a)
{
    printf("The address of a is %u\n", &a);
}