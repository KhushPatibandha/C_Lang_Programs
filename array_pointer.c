#include<stdio.h>
int main()
{
    int marks[4];
    int *a;
    a = &marks[0];

    for(int i = 0; i < 4; i++)
    {
        printf("Enter the marks of student %i: \n", i+1);
        scanf("%i", a);
        a++;
    } 

    for(int i = 0; i < 4; i++)
    {
        printf("The value of marks of student %i is %i\n", i+1, marks[i]);
    } 
}
