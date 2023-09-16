/*
    Calculating profit or loss.
    date:16/09/2023
*/

# include <stdio.h>

int main()
{
    // decalare variables 
    int buying, selling, net;

    // take inputs of buying and selling price 
    printf("Enter buying price: ");
    scanf("%d", &buying);
    printf("Enter selling price: ");
    scanf("%d", &selling);

    // determine profit or loss and calculate the amount
    if(selling > buying )
        printf("Profit: %d", net = selling - buying);
    if else (buying > selling)
        printf("Loss: %d", net = buying - selling);
    else 
        printf("No profit no loss");
    
    return 0;
}