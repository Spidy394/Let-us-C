/*
    to determine the grade of steel
    date: 19/09/2023
*/

# include <stdio.h>

int main()
{
    float hardness, carbon, tensile;
    printf("Enter hardness: ");
    scanf("%f", &hardness);
    printf("Enter carbon content: ");
    scanf("%f", &carbon);
    printf("Enter tensile strengh: ");
    scanf("%f", &tensile);
    
    if ((hardness > 50) && (carbon < .7) && (tensile > 5600))
        printf("Grade 10");

    else if ((hardness > 50) && (carbon < .7))
        printf("Grade 9");

    else if ((carbon < .7) && (tensile > 5600))
        printf("Grade 8");

    else if ((hardness > 50) && (tensile > 5600))
        printf("Grade 7");

    else if ((hardness > 50) || (carbon < .7) || (tensile > 5600))
        printf("Grade 6");

    else
        printf("Grade 5");

    return 0;
}