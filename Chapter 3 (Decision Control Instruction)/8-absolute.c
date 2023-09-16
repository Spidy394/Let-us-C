/*
    to find the absolute value of a number by user
    date: 16/09/2023
*/

#include <stdio.h>

int main()
{
    float number, absolute_value;

    printf("Enter a number: ");
    scanf("%f", &number);

    // Calculate the absolute value
    if (number >= 0) 
        absolute_value = number;

    else 
        absolute_value = -number;

    // Display the absolute value
    printf("The absolute value of the entered number is: %.2f\n", absolute_value);

    return 0;
}
