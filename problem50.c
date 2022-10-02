#include<stdio.h>
int main()
{
    FILE *ptr;
    int a, b, c;
    ptr = fopen("file.txt", "r");
    fscanf(ptr,"%i %i %i", &a, &b, &c);
    printf("The value of a, b and c is %i, %i and %i\n", a, b, c);
}