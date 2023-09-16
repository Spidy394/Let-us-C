/*
    check if 3 point are colinear or not
*/

# include <stdio.h>

int main()
{
    float x1, y1, x2, y2, x3, y3, slope1, slope2;

    printf("Enter 1st point: ");
    scanf("%f %f", &x1, &y1);
    printf("Enter 2nd point: ");
    scanf("%f %f", &x2, &y2);
    printf("Enter 3rd point: ");
    scanf("%f %f", &x3, &y3);

    slope1 = (y2 - y1)/(x2 - x1);
    slope2 = (y3 - y2)/(x3 - x2);

    if (slope1 == slope2)
        printf("All the points lie on the same st. line i.e. collinear");
    
    else 
        printf("All the points doesn't lie on the same st. line i.e. non-colliner");

    return 0;
}