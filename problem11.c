#include <stdio.h>
int main()
{
    int year;
    printf("Enter your year: \n");
    scanf("%i", &year);

     if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
    {
        printf("%i year is leap year\n", year);
    }
    else
    {
        printf("%i is not a leap year\n", year);
    }
}