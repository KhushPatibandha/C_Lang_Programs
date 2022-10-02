//97-122 = a-z

#include <stdio.h>
int main()

{
    char ch; 
    printf("Enter you letter: \n"); 
    scanf("%c", &ch);
    
    if(ch >= 97 && ch <= 122)
    {
        printf("Letter is in lower case\n");
    }  

    else
    {
        printf("Letter is not in lower case\n");
    }
}