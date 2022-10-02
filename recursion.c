#include<stdio.h>
int factorial(int x);

int main()
{
    int a;
    printf("Enter a number to find its factorial: \n");
    scanf("%i", &a);

    printf("The value of factorial %i is %i\n", a, factorial(a));
    return 0; 
}

int factorial(int x)
{
    if(x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x-1);
    }
}