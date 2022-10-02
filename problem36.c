#include<stdio.h>
int main()
{
    int mul[10];

    for(int i = 0; i < 10; i++)
    {
        mul[i] = 5 * (i + 1); 
    }

    for(int i = 0; i < 10; i++)
    {
        printf("5 x %i = %i\n", i+1, mul[i]); 
    }
}