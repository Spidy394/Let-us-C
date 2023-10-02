/*
    to verify if a tringle is valid or not by sum of sides.
    date: 2/10/23
*/

# include <stdio.h>

int main()
{
    float a, b, c, sumOfSides;

    printf("Enter side a: ");
    scanf("%f", &a);
    printf("Enter side b: ");
    scanf("%f", &b);
    printf("Enter side c: ");
    scanf("%f", &c);

    sumOfSides = a + b + c;

    if (((a+b)>sumOfSides) && ((b+c)>sumOfSides) && ((a+c)>sumOfSides))
        printf("It is a valid triangle.");

    else
        printf("It is a not a valid triangle.");

    return 0;
}