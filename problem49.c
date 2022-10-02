#include<stdio.h>
int main()
{
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("Khush.txt", "r");

    if(ptr == NULL)
    {
        printf("The file does not exist\n");
    }

    else
    {
    fscanf(ptr, "%i", &num);
    fscanf(ptr, "%i", &num2);
    fclose(ptr);
    printf("The value of num is %i\n", num);
    printf("The value of num is %i\n", num2);
    }
}