#include<stdio.h>

typedef struct timestamp
{
    int date;
    int month;
    int year;
    int hour;
    int minute;
    int second;
}time;

void display(time t)
{
    printf("The timestamp is %i/%i/%i %i:%i:%i", t.date, t.month, t.year, t.hour, t.minute, t.second);
}

int main()
{
    time(t) = {12, 01, 05, 7, 52, 41};
    display(t); 
}