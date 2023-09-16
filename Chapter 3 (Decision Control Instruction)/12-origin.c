/*
    location of a point
    date: 16/09/2023
*/

#include <stdio.h>

int main()
{
    float x, y;

    printf("Enter coordinate of a point: ");
    scanf("%f %f", &x, &y);

    if (x == 0) 
    {
        if (y != 0)
            printf("The point lies on the x-axis");
        else 
            printf("The point is on the origin");
    }

    else if (y == 0) 
    printf("The point lies on the y-axis");
    
    else
        printf("The point is in the xy plane");
    
    return 0;
}