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
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    //(*ptr).code = 101; both works the same 
    ptr ->code = 101;

    printf("%i", e1.code);

}