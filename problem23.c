#include<stdio.h>

int main()
{
    float celsius;
    float fahrenheit; 

    printf("Enter the temperature value in celsius: \n");
    scanf("%f", &celsius);

    fahrenheit = ((celsius * 9)/5) + 32;

    printf("the temperature in fahrenheit is %f",  fahrenheit);
}