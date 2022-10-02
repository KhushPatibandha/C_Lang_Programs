#include<stdio.h>

struct vector 
{
    int x;
    int y;
};

struct vector sumVector(struct vector v1, struct vector v2)
{
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main()
{
    struct vector v1, v2, sum;
    v1.x = 10;
    v1.y = 11; 
    printf("X dim is %i and Y dim is %i\n", v1.x, v1.y);

    v2.x = 101;
    v2.y = 111; 
    printf("X dim is %i and Y dim is %i\n", v2.x, v2.y);

    sum = sumVector(v1, v2);
    printf("X dim of result is %i and Y is %i\n", sum.x, sum.y);

}