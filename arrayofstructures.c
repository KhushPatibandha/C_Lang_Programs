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
    struct employee facebook[100];

    facebook[0].code = 100;
    facebook[0].salary = 99.9;
    strcpy(facebook[0].name, "Khush");

    facebook[1].code = 99;
    facebook[1].salary = 89.9;
    strcpy(facebook[1].name, "Harsh");

    facebook[2].code = 98;
    facebook[2].salary = 79.9;
    strcpy(facebook[2].name, "Raj");

    printf("Done");
}