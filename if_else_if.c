#include <stdio.h>

int main()

{
    int num;
    printf("Enter you number: \n");
    scanf("%i", &num);

    if (num == 1)
    {
        printf("Your number is 1\n");
    }

    else if (num == 2)

    {
        printf("Your number is 2\n");
    }

    else
    {
        printf("Your number is not 1 nor 2\n");
    }
}