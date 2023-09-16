/*
    check weather a triangle is valid or not by angles
    date: 16/09/2023
*/

# include <stdio.h>

int main()
{
    int angle1, angle2, angle3, soa;

    printf("Enter the angles of the triangle: ");
    scanf("%d%d%d", &angle1, &angle2, &angle3);

    soa = angle1 + angle2 + angle3;

    if (soa == 180)
        printf("It is a valid triangle");

    else 
        printf("It is not a valid triangle");

    return 0;
}