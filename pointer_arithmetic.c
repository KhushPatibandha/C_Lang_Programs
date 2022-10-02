#include<stdio.h>
int main()
{
    int i = 34; 
    int *a = &i;
    printf("The value of a is %u\n", a);
    a++;
    printf("The value of a is %u\n", a);   
}