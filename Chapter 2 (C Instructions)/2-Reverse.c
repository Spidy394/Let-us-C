/*
    reversing a 5-digit no.
    Date: 10/09/2023
*/

# include <stdio.h>

int main()
{
    int n , d1, d2, d3, d4, d5, revers;

    printf("Enter a 5-Digit no: ");
    scanf("%d", &n);

    // extracting the digits 
    d1 = n % 10;
    d2 = (n / 10) %10;
    d3 = (n / 100) %10;
    d4 = (n / 1000) %10;
    d5 = (n / 10000) %10;

    //  joining the digits 
    revers = d1 * 10000 + d2 * 1000 + d3 * 100 + d4 * 10 + d5;

    printf("Reverse: %d", revers);

    return 0;
}