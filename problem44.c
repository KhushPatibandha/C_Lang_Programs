#include<stdio.h>

struct vector 
{
    int x;
    int y;
};

int main()
{
    struct vector v1, v2;
    v1.x = 10;
    v1.y = 11; 
    printf("X dim is %i and Y dim is %i\n", v1.x, v1.y);

    v2.x = 101;
    v2.y = 111; 
    printf("X dim is %i and Y dim is %i\n", v2.x, v2.y);

}