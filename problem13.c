#include <stdio.h>
int main()
{
    int i = 0;
    int n;
    printf("Enter the value of n\n");
    scanf("%i", &n);

    do
    {
        printf("Your numbers is %i\n", i+1);
        i++;
    }
    while(i<n);
    
}