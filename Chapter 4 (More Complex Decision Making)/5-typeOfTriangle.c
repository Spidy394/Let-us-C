/* 
    to determine the type of triangle.
    date:20/09/23
*/

# include <stdio.h>
# include <math.h>

int main()
{
    float a, b, c;

    printf("Enter side a: ");
    scanf("%f", &a);
    printf("Enter side b: ");
    scanf("%f", &b);
    printf("Enter side c: ");
    scanf("%f", &c);

     // Check if the input forms a valid triangle
    if (a + b > c && a + c > b && b + c > a) 
    {   
        // Check for equilateral triangle
        if (a == b && b == c)
            printf("It is an Equilateral Triangle\n");

        // Check for isosceles triangle
        else if (a == b || b == c || a == c)
            printf("It is an Isosceles Triangle\n");

        // Check for right-angled triangle
        else if (pow(c, 2) == (pow(a, 2) + pow(b, 2)) || pow(a, 2) == (pow(b, 2) + pow(c, 2)) || pow(b, 2) == (pow(a, 2) + pow(c, 2))) 
            printf("It is a Right Angle Triangle\n");

        // If none of the above conditions are met, it's a scalene triangle
        else 
            printf("It is a Scalene Triangle\n");
    }

    else
        printf("It is not a triangle\n");
            
    return 0;
}