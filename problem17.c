#include<stdio.h>
int main()
{
    int i; 
    int num;

    printf("Enter a number: \n");
    scanf("%i", &num);

    for(i = 1; i<=10; i++)
    {
        printf("%i * %i = %i\n", num , i , (num*i));

    }
}