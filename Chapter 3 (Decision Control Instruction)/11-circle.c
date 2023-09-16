/*
    check a point in circle or not.
    date: 16/09/2023
*/

# include <stdio.h>
# include <math.h>

int main()
{
    float center_x, center_y, x, y, radius, distance;

    printf("Enter the coordinate of center of circle: ");
    scanf("%f %f", &center_x, &center_y);
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    printf("Enter coordinate of point: ");
    scanf("%f %f", &x, &y);

//     Calculate the distance between the center of the circle and the point
    distance = sqrt(pow((x - center_x),2) + pow((y - center_y),2));

    if (distance < radius)
        printf("The point lies inside the circle");

     else if (distance == radius)
        printf("The point lies on the circle.");

    else
        printf("The point lies outside the circle.");

    return 0;
}