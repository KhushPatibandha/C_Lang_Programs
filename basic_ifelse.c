#include <stdio.h>

int main()
 
{
    int a; 
    printf("Enter a number: \n");
    scanf("%i", &a);

    if (a % 2 ==0)

    {
        printf("%i is even\n", a);

    }

    else 
    {
        printf("%i is odd\n", a);
    }

     
}