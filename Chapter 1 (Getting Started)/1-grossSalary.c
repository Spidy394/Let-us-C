/*
    Calculation of gross salary.
     Date: 06/09/2023
*/

# include<stdio.h>

int main()
{
    // declaration of variables
    int base;
    float da, hra, gross;

    // taking input from user
    printf("Enter base salary: ");
    scanf("%d", &base);

    da = base*0.4; // calculating dearness allowance
    hra = base*0.2; // calculating house rent allowance
    gross = base + da + hra; // calculating gross salary

    // printing gross salary
    printf("Gross salary: %.2f", gross);
    
    return 0;
}
