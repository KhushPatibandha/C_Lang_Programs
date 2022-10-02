#include<stdio.h>
int main()
{
    int i = 10;
    int c; 
    int x = 11;
    int *a = &i;
    int *b = &x;

    printf("The value of a is %u\n", a);
    a++;
    printf("The value of a is %u\n", a);

    printf("The value of a is %u\n", a);
    a--;
    printf("The value of a is %u\n", a);

    printf("The subtraction of two pointer a and b is %u\n", (a - b));
}