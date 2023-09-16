/*
    to find if a no is even or odd 
    date:16/09/2023
*/

# include <stdio.h>

int main()
{

    int n;

    printf("Enter an integer no: ");
    scanf("%d", &n);

    if(n%2 == 0)
        printf("It is and even no.");
    else
        printf("It is a odd no.");
    
    return 0;
}