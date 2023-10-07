/*
    Calculation of area of a triangle.
    date: 10/09/2023.
*/

# include <stdio.h>
# include <math.h>

int main()
{
    // variable declaration 
    int a,b,c;
    float s, area;

    // take inputs
    printf("Enter side a: ");
    scanf("%d", &a);
    printf("Enter side b: ");
    scanf("%d", &b);
    printf("Enter side c: ");
    scanf("%d", &c);

    // calaculation 
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    // print result    
    printf("Area of triangle is: %.2f", area);

    return 0;
}
