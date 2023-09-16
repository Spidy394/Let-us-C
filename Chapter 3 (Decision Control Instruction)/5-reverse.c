/*
    to check reverse of a 5 digit no is same or not
    date:16/09/2023
*/

# include <stdio.h>

int main()
{
    int n, d1, d2, d3, d4, d5, reverse; 

    printf("Enter a 5-Digit no: ");
    scanf("%d", &n);

    // extracting digits and reversing 
    d1 = n % 10;
    d2 = (n / 10) % 10;
    d3 = (n / 100) % 10;
    d4 = (n / 1000) % 10;
    d5 = (n / 10000) % 10;
    
    reverse = d5*10000 + d4*1000 + d3*100 + d2*10 + d1;

    // checking weather reverse is also same as original
    if (reverse == n)
        printf("Reverse of %d is same as it", n);
    
    else 
        printf("Reverse of %d is %d", n, reverse);

    return 0;
}