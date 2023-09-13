/*
    Calculation of area, perimeter of rectangle, area , circumference of circle.
    Date: 06/09/2023
*/

# include<stdio.h>
# define pi 3.14

int main()
{
    float l, b, r, area1, area2, perimeter, circumference;

    printf("Enter length of rectangle: ");
    scanf("%f", &l);
    printf("Enter breadth of rectangle: ");
    scanf("%f", &b);
    printf("Enter radius of circle: ");
    scanf("%f", &r);

    area1 = l*b;
    area2 = pi*r*r;
    perimeter = 2*(l+b);
    circumference = 2*pi*r;

    printf("\nArea of rectangle is: %.2f sq. unit", area1);
    printf("\nArea of circle is: %.2f sq. unit", area2);
    printf("\nPerimeter of rectangle is: %.2f  units", perimeter);
    printf("\nCircumference of circle is: %.2f  units", circumference);

    return 0;
}
