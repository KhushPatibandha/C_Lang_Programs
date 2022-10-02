#include<stdio.h>
int main()
{
    int n_students = 3; 
    int n_subjects = 5; 

    int marks[3][5];

    for(int i = 0; i < n_students; i++)
    {
        for(int j = 0; j < n_subjects; j++)
        {
            printf("Enter the marks of students %i in subject %i\n", i + 1, j + 1);
            scanf("%i", &marks[i][j]);

        }
    }

    for(int i = 0; i < n_students; i++)
    {
        for(int j = 0; j < n_subjects; j++)
        {
            printf("Thee marks of students %i in subject %i is: %i\n", i + 1, j + 1, marks[i][j]);
        }
    }        

}