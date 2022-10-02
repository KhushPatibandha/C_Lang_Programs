#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number;
    int guess;  
    int nguesses = 1; 
    srand(time(0));
    number = rand()%100 + 1;
    //printf("Your number is %i\n", number);

    do
    {
        printf("Guess a number between 1 to 100\n");
        scanf("%i", &guess);

        if(guess < number)
        {
            printf("Higher number please!\n");
        }

        else if(guess > number)
        {
            printf("Lower number please!\n");
        }

        else
        {
            printf("You guessed it right in %i attempts\n", nguesses);
        }

        nguesses++; 
        

    }
    while(guess != number);


}