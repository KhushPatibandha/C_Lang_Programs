#include<stdio.h>
int main()
{
    int marks[4];

    printf("Enter the marks of student 1:\n");
    scanf("%i", &marks[0]);
    printf("Enter the marks of student 2:\n");
    scanf("%i", &marks[1]);
    printf("Enter the marks of student 3:\n");
    scanf("%i", &marks[2]);
    printf("Enter the marks of student 4:\n");
    scanf("%i", &marks[3]);

    printf("You have entered %i, %i, %i and %i\n", marks[0], marks[1], marks[2], marks[3]);
}