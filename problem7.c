#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: \n");
    scanf("%i", &marks);

    if(marks >= 90 && marks <= 100)

    {
        printf("You have got A grade\n");
    }

    else if(marks >= 80 && marks < 90)

    {
        printf("You have got B grade\n");
    }

    else if(marks >= 70 && marks < 80)

    {
        printf("You have got C grade\n");
    }

    else if(marks >= 60 && marks < 70)

    {
        printf("You have got D grade\n");
    }

    else if(marks < 60)

    {
        printf("You have got F grade\n");
    }

    

}