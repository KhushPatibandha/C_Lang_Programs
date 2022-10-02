#include <stdio.h>

int main()

{
    int phy, che, maths;
    int total;
    printf("Enter physics marks: \n ");
    scanf("%i", &phy);

    printf("Enter chemistry marks: \n ");
    scanf("%i", &che);

    printf("Enter maths marks: \n ");
    scanf("%i", &maths);

    total = (phy + che + maths)/3;

    if((total < 40) || phy < 33 || maths < 33 || che < 33)

    {
        printf("Your total percentage is %i and you have failed\n", total);

    }

    else
    {
       printf("Your total percentage is %i and you have passed\n", total);


    }


}