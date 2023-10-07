/*
    to swap to numbers.
    date: 11/09/2023
*/

# include <stdio.h>

int main()
{
    // variable declaration 
    int c,d; 

    // take inputs 
    printf("Enter value of C: ");
    scanf("%d", &c);
    printf("Enter value of D: ");
    scanf("%d", &d);

    // swaping 
    c = c + d;
    d = c - d;
    c = c - d;

    // print result 
    printf("C = %d\n", c);
    printf("D = %d", d);

    return 0;
}
