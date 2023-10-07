/*
    convertion of cartesian to polar coordinate.
    date: 11/09/2023.
*/

# include <stdio.h>
# include <math.h>
int main()
{
    // variable declaration
    float x, y, radialDistance, angle;

    // taking inputs for x and y coordinates
    printf("Enter x-coordinate: ");
    scanf("%f", &x);
    printf("Enter y-coordinate: ");
    scanf("%f", &y);

    // finding radialDistance
    radialDistance = sqrt(pow(x, 2) + pow(y, 2));

    // finding angle in radian
    angle = atan2(y,x);

    // print result
    printf("The Polar Coordinarte is: (%.2f,%.2f radians)", radialDistance , angle);

    return 0;
}
