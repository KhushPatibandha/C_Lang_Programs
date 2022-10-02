#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[50];
};

int main()
{
    struct employee Khush = {100, 10.9, "Khush"};
    
    printf("code is: %i\n", Khush.code);
    printf("salary is: %f\n", Khush.salary);
    printf("name is: %s\n", Khush.name);
}