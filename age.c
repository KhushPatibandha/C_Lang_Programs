#include <stdio.h>

int main()

{   
    int a;
    printf("Enter your age: \n");
    scanf("%i", &a);

    if(a>=90)

    {
        printf("You can not drive\n");
    }

    else
    {
        printf("You are can drive\n");
    }

}