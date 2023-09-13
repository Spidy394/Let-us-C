/*
    Calculation of area of a triangle.
    date: 10/09/2023.
*/

# include <stdio.h>
# include <math.h>

int main()
{
    int a,b,c;
    float s, area;

    printf("Enter side a: ");
    scanf("%d", &a);
    printf("Enter side b: ");
    scanf("%d", &b);
    printf("Enter side c: ");
    scanf("%d", &c);

    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    
    printf("Area of triangle is: %.2f", area);

    return 0;
}
