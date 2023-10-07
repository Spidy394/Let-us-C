/*
    to find out weather a year is leap or not
    date: 16/09/2023
*/

# include <stdio.h>

int main()
{
    // variable declaration
    int year;

    // take input 
    printf("Enter year: ");
    scanf("%d", &year);

    /*
        If a year is divisible by 4, it may be a leap year.
        However, if the year is divisible by 100, it is not a leap year,
        unless if the year is divisible by 400, it is a leap year. 
    */

    // apply the conditions and print result
    if (year % 4 == 0) 
    {
        if (year % 100 != 0) 
            printf("It is a leap year.\n");
        
        else 
        {
            if (year % 400 == 0) 
                printf("It is a leap year.\n"); 
            
            else 
                printf("It is not a leap year.\n");
        }
    } 
    
    else 
        printf("It is not a leap year.\n");
    
    return 0;
}





