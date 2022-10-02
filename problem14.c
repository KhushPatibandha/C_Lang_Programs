#include<stdio.h>
int main()
{   
    int n;
    printf("Enter the value of n: \n");
    scanf("%i", &n);

    for(int i = n; i; i-- )
    {
        printf("The value of i is %i\n", i);
    }
}