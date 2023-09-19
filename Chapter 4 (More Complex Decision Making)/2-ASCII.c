/*
    to determine the category of input 
    date: 19/09/2023
*/

#include<stdio.h>
int main()
{
    char x;
    printf("Enter the character:");
    scanf("%c", &x);

    if (x>64 && x<91)
        printf("Uppercase");
    
    else if (x>96 && x<123)
        printf("Lowercase");
    
    else if (x>48 && x<57)
        printf("Digit");

    else if ((x>0 && x<47) || (x>58 && x<64) || (x>91 && x<96) || (x>123 && x<127))
        printf("Special Symbol");

    else 
        printf("Invalid Input");


    return 0;
}