/*
    to swap to numbers.
    date: 11/09/2023
*/

# include <stdio.h>

int main()
{
    int c,d; 

    printf("Enter value of C: ");
    scanf("%d", &c);
    printf("Enter value of D: ");
    scanf("%d", &d);

    // swaping 
    c = c + d;
    d = c - d;
    c = c - d;

    printf("C = %d\n", c);
    printf("D = %d", d);

    return 0;
}