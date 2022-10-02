#include<stdio.h>
int main()
{
    int i;
    int num = 10;
    //printf("Enter Your number: \n");
    //scanf("%i", &num);

    for(i = 10; i >= 1; i--)
    {
        printf("%i * %i = %i\n", num, i, (num*i));
    }
}