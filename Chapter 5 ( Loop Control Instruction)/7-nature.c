/*
    to find the nature of a numbers
    date: 4/1/2024
*/

# include <stdio.h>

int main()
{
    int limit, num, positives = 0, negatives = 0, zeros = 0;
    
    printf("Enter limit: ");
    scanf("%d", &limit);

    while(limit!=0) 
    {
        printf("Enter a number: ");
        scanf("%d", &num);
    

        if (num > 0)
        {
            positives++;
        }

        else if (num < 0)
        {
            negatives++;
        }

        else 
        {
            zeros++;
        }

        limit--;
    }

    printf("\nNo of positive nos: %d", positives);
    printf("\nNo of negative nos: %d", negatives);
    printf("\nNo of zeros: %d", zeros);
    
    return 0;
}