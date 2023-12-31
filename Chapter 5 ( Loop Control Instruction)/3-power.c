/*
    calculation of exponential operation using loop
    date: 30/12/2023
*/

# include <stdio.h>

int main()
{
    int e, n, i, v=1;

    printf("Enter first no: ");
    scanf("%d", &n);
    printf("Enter second no: ");   
    scanf("%d", &e);

    for(i=1;i<=e;i++)
    {
        v = v*n;
    }

    printf("%d raised to the power %d is: %d", n, e, v);

    return 0;
}