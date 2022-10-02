#include<stdio.h>
int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("file.txt", "r");
    fscanf(ptr, "%i", &num);
    fclose(ptr);
    ptr = fopen("file.txt", "w");
    fprintf(ptr, "%i", num*2);
    fclose(ptr);
}