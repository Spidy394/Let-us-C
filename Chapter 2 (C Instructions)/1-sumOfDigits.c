/*
    Calculation of sum of digits of a 5-digit no. given by the user.
    Date:- 09/09/2023
*/

# include<stdio.h>

int main()
{
    // declaration variables
    int n,sum;

    // taking inputs 
    printf("Enter a 5-digit no: ");
    scanf("%d", &n);

    //calculating the one's place number
    sum = n%10;
    
    //calculating the two's place number
    sum = sum + (n%100)/10;
    
    //calculating the third's place number
    sum = sum + (n%1000)/100;
    
    //calculating the forth's place number
    sum = sum + (n%10000)/1000;
    
    //calculating fifth's place number
    sum = sum + (n%100000)/10000;

    // print result
    printf("The sum of digits of %d is %d" , n , sum);
    
    return 0;
}
