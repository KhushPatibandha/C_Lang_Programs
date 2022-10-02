#include<stdio.h>
int main()
{
    int mul[10];
    int n; 

    printf("Enter a number to find its table:\n");
    scanf("%i", &n);

    for(int i = 0; i < 10; i++)
    {
        mul[i] = n * (i + 1);
    } 

    for(int i = 0; i < 10; i++)
    {
        printf("%i x %i = %i\n", n , i+1, mul[i]);
    } 

}