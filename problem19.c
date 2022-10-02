// write a program to sum first n natural numbers 

#include<stdio.h>
int main()
{
    int i;
    int sum = 0;
    int n;
    printf("Enter your number:\n");
    scanf("%i", &n);

    for(i = 0; i <= n; i++)
    {
        sum+=i; 
    }
    printf("Sum of 0 to %i is %i", n , sum);
}