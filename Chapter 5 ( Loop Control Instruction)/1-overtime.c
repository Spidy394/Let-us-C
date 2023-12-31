/*
    calculation of overtime pay
    date: 30/12/23
*/

# include <stdio.h>

int main()
{
    int i, hr, pay;

    for(i=1;i<=10;i++)
    {
        printf("\nEnter overtime for Employee %d: ", i);
        scanf("%d", &hr);

        if(hr>40)
        {
            pay = (hr-40)*12;
            printf("payment for employee %d is: %d", i, pay);
        }
        
        else
        {
            printf("No payment for employee %d.", i);
        }
    }

    return 0;
}