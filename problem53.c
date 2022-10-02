#include<stdio.h>
int main()
{
    FILE *ptr;
    int salary1, salary2;
    char name1[50], name2[50];
    printf("The name of the employee1 is: ");
    gets(name1);
    printf("The name of the employee2 is: ");
    gets(name2);

    printf("Enter the salary of employee1: ");
    scanf("%i", &salary1);
    printf("Enter the salary of employee2: ");
    scanf("%i", &salary2);

    ptr = fopen("employee.txt", "w");
    fprintf(ptr, "%s ---- %i\n", name1, salary1);
    fprintf(ptr, "%s ---- %i\n", name2, salary2);
    fclose(ptr);
}