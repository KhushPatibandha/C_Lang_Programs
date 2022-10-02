#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[50];
};

void show(struct employee emp)
{
    printf("The code of employee is:%i\n", emp.code);
    printf("The salary of employee is:%f\n", emp.salary);
    printf("The name of the employee is:%s\n", emp.name);
    emp.code = 10;
}

int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    //(*ptr).code = 101; both works the same 
    ptr ->code = 101;
    ptr ->salary = 10.1;
    strcpy(ptr ->name, "Khush");

    show(e1);
    printf("The code of employee is: %i\n", e1.code);
}