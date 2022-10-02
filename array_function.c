#include<stdio.h>
void printArray(int *ptr, int n);
int main()
{
    int arr[] = {1,2,3,4};
    printArray(arr, 4);
}

void printArray(int *ptr, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("The value of element %i is %i\n", i+1, *(ptr+i));
    }
}