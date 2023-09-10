/*
    Calculation of gross salary.
     Date: 06/09/2023
*/

# include<stdio.h>

int main()
{
    int base;
    float da, hra, gross;

    printf("Enter base salary: ");
    scanf("%d", &base);

    da = base*0.4;
    hra = base*0.2;
    gross = base + da + hra;

    printf("Gross salary: %.2f", gross);
    
    return 0;
}