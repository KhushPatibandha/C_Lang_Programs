#include<stdio.h>
int main()
{
    FILE *ptr;
    int num;
    printf("Enter the integer you need the table of: \n");
    scanf("%i", &num);
    ptr = fopen("table.txt", "w");
    for(int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%i X %i = %i\n", num, i+1, num*(i+1));
    }
    fclose(ptr);
}