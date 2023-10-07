/*
    location of a point
    date: 16/09/2023
*/

#include <stdio.h>

int main()
{
    // variable declaration
    float x, y;

    // take input 
    printf("Enter coordinate of a point: ");
    scanf("%f %f", &x, &y);

    // apply conditions to check if point lies on x-axis or origin and print result
    if (x == 0) 
    {
        if (y != 0)
            printf("The point lies on the x-axis");
        else 
            printf("The point is on the origin");
    }

    // apply conditions to check if point lies on y-axis or xy plane and print result
    else if (y == 0) 
    printf("The point lies on the y-axis");
    
    else
        printf("The point is in the xy plane");
    
    return 0;
}
