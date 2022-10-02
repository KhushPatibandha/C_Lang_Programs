#include<stdio.h>
int fibo(int a);

int main()
{
    int a;
    int result;
    printf("Enter the nth number of fibonacci series: \n");
    scanf("%i", &a);

    if(a < 0)
    {
        printf("Fibonacci of negative number is not possible.\n");
    }

    else
    {
        result = fibo(a);
        printf("The %i number in fibonacci series is %i\n", a, result);
    }
}

int fibo(int a)
{
    if(a == 0)
    {
        return 0;
    }

    else if(a == 1)
    {
        return 1;
    }

    else
    {
        return (fibo(a - 1) + fibo(a - 2));
    }
}