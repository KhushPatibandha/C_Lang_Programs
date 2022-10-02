#include<stdio.h>
#include<string.h>

typedef struct empolyee
{
    int code;
    float salary;
    char name[50];
} emp;

int main()
{
    //declaring e1 and ptr
    emp e1;
    emp *ptr;

    //pointing ptr to e1
    ptr = &e1;

    //set the member values for e1
    ptr ->code = 101;
    ptr ->salary = 10.1;
    strcpy(ptr ->name, "Khush");
}