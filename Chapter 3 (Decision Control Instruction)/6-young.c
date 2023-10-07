/*
    to find who is young among 3
    date: 16/09/2023
*/

# include <stdio.h>

int main()
{
    // variable declaration
    int x, y, z;

    // take input
    printf("Enter Ram's age: ");
    scanf("%d", &x);
    printf("Enter Shyam's age: ");
    scanf("%d", &y);
    printf("Enter Ajay's age: ");
    scanf("%d", &z);

    // comparing ages of the three, find youngest and print result
    if (x < y) 
    {
        if (x < z) 
            printf("Ram is the youngest\n");
        
        else 
            printf("Ajay is the youngest\n");
        
    }

    else if (y < z)
        printf("Shyam is the youngest\n");
   
    else 
        printf("Ajay is the youngest\n");
    
    return 0;
}
