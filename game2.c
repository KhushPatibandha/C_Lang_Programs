#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakeWaterGun(char you, char comp)
{
    // return 1 if you win, -1 of you lose and 0 is draw
    
    if(you == comp)
    {
        return 0;
    }

    else if(you == 's' && comp == 'w')
    {
        return 1;
    }

    else if(you == 's' && comp == 'g')
    {
        return -1;
    }

    else if(you == 'w' && comp == 's')
    {
        return -1;
    }

    else if(you == 'w' && comp == 'g')
    {
        return 1;
    }

    else if(you == 'g' && comp == 's')
    {
        return 1;
    }

    else if(you == 'g' && comp == 'w')
    {
        return -1;
    }
}

int main()
{
    char you, comp;
    int number;
    srand(time(0));
    number = rand()% 3+1;
    
    if(number == 1)
    {
        comp = 's';
    }

    else if(number == 2)
    {
        comp = 'w';
    }

    else if(number == 3)
    {
        comp = 'g';
    }

    printf("Enter s for snake, w for water and g for gun\n");
    scanf("%c", &you);
    int result = snakeWaterGun(you, comp);
    
    if(result == 0)
    {
        printf("Game draw\n");
    }

    else if(result == 1)
    {
        printf("You won\n");
    }

    else
    {
        printf("You lose\n");
    }

    printf("You chose %c and compuer chose %c\n", you, comp);
}