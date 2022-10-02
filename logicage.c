#include <stdio.h>

int main()

{
    int age;
    printf("Enter your age: \n");
    scanf("%i", &age);

    if(age <= 90 && age >= 18)

    {
        printf("You can drive\n");

    }

    else 
    {
        printf("You cannot drive");
    }

}