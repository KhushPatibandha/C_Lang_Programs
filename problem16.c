#include<stdio.h>
int main()
{
    int n;
    printf("Enter your number: \n");
    scanf("%i", &n);

    for(int i = n ; i ; i--)
    {
        printf("The value of i is %i\n", i);
    }
}