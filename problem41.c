#include<stdio.h>
int strlen(char *st)
{
    char *ptr = st;
    int len = 0;

    while(ptr!='\0')
    {
        len++;
        ptr++;
    }
    return len;
}
int main()
{
    char st[] = "Khush";
    int l = strlen(st);
    printf("The lenght of this string is %i", l);
}