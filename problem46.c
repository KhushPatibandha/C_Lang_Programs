#include<stdio.h>

typedef struct complex
{
    int real;
    int complex;
}comp;

void display(comp c)
{
    printf("The value of real part is %i\n", c.real);
    printf("The value of imaginary part is %i\n", c.complex);
}

int main()
{
    comp cnums[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Enter the real value for %i num\n", i+1);
        scanf("%i", &cnums[i].real);

        printf("Enter the complex value for %i num\n", i+1);
        scanf("%i", &cnums[i].complex);
    }

    for(int i = 0; i < 5; i++)
    {
        display(cnums[i]);
    }
}