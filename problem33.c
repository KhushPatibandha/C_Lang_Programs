#include<stdio.h>
int main()
{
    int marks[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Enter the marks of student %i:\n", i+1);
        scanf("%i", &marks[i]);
    } 

    for(int i = 0; i < 5; i++)
    {
        printf("The marks of student %i is %i\n", i+1, marks[i]);
    }    
}