#include<stdio.h>
float average(int a, int b, int c);

int main()
{
    int a, b, c;
    printf("Enter the value of a: \n");
    scanf("%i", &a);

    printf("Enter the value of b: \n");
    scanf("%i", &b);

    printf("Enter the value of c: \n");
    scanf("%i", &c);

    printf("the average of the three value is %f\n", average(a, b, c));
}

float average(int a, int b, int c)
{
    float result; 

    result = (float)(a + b + c)/3;
    return result; 
}