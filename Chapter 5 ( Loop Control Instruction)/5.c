#include <stdio.h>
int main()
{
    int hrs;
    for(int i =0;i<10;i++)
  { printf("Enter No of hours worked");
    scanf("%d",&hrs);
    if(hrs>40)
    {
        int pay= (hrs-40)*12;
        printf("%d",&pay);
    }
    else
    {
        printf("No overpay due");
    }


  }

    return 0;
}