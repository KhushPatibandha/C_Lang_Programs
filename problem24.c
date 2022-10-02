#include<stdio.h>
float force(float mass);

int main()
{
    float mass;
    printf("Enter the mass in Kg: \n", mass);
    scanf("%f", &mass);
    printf("The value of force in Newton is %.1f\n", force(mass));

}

float force(float mass)
{
    float result; 
    result = mass * 9.8; 
    return result; 
}