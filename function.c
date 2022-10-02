#include<stdio.h>
void display();  // Function prototype 


int main()
{   
    int a;
    printf("Initializing display function\n");

    display();      // Function display

    printf("Display function finished its work\n");
}

// Function definition 
void display()          
{
    printf("This is display\n");
}