#include <stdio.h>
int main()
{
    int i = 0;
    int n;
    printf("Give a number: \n");
    scanf("%i", &n);

    do
    {
        printf("The number is %i\n", i+1);
        i++;
    }
    while(i < n);
    
}