/*
    calculation of distance in nautical miles
    date: 11/09/2023
*/

# include <stdio.h>
# include <math.h>

int main()
{
    float l1, l2, g1, g2, distance;

    // taking inputs of latitudes and longitudes
    printf("Enter all values in degree.\n");
    printf("Latitude L1: ");
    scanf("%f", &l1);
    printf("Latitude L2: ");
    scanf("%f", &l2);
    printf("Longitude G1: ");
    scanf("%f", &g1);
    printf("Longitude G2: ");
    scanf("%f", &g2);

    // converting to radian
    l1 = l1 * M_PI / 180; 
    l2 = l2 * M_PI / 180;
    g1 = g1 * M_PI / 180;
    g2 = g2 * M_PI / 180;

    // calculating distance in nautical miles
    distance = 3963 * acos( ( sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2 - g1) ) );

    printf("Distance in nautical miles: %.2f", distance);

    return 0;
}