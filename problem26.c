#include<stdio.h>
int sum(int a);

int main()
{
    int a;
    
    printf("Enter a n natural number: \n");
    scanf("%i", &a);

    if(a == 0 || a < 0)
    {
        printf("Not a natural number\n");
    }

    else
    {
        printf("The sum of the nth natural number is %i\n", sum(a));
    }
    
}

int sum(int a)
{
    if(a == 1)
    {
        return 1;
    }
    
    else
    {
        return sum(a - 1) + a; 
    }
}