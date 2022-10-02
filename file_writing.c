#include<stdio.h>
int main()
{
    FILE *fptr;
    int number = 10;
    fptr = fopen("generated.txt", "w");
    fprintf(fptr, "The number is %i\n", number);
    fprintf(fptr, "Thanks for using fprintf");
    fclose(fptr);
}