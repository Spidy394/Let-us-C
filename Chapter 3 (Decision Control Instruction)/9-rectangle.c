/*
    to find if area and perimeter of a rectangle is same or not
    date:16/09/2023
*/

# include <stdio.h>

int main()
{
    float length, breadth, area, perimeter;

    printf("Enter length of a rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of a rectangle: ");
    scanf("%f", &breadth);    

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    if (area > perimeter)
        printf("Area is greater than Perimeter");

    else if (area < perimeter)
        printf("Perimeter is greater than Area");
    
    else
        printf("Area and Perimeter are same");

    return 0;
}