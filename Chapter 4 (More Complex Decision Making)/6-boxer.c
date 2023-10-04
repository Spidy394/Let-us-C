/*
    determine class of boxer
    date: 4/10/2023
*/

# include <stdio.h>

int main()
{
    float weight;

    printf("Enter weight of boxer (in pounds)");
    scanf("%f", &weight);

    if (weight < 115)
        printf("Flyweight");

    else if ((weight>=115) && (weight<=121))
        printf("Bantamweight");

    else if ((weight>=122) && (weight<=153))
        printf("Featherweight");

    else if ((weight>=154) && (weight<=189))
        printf("Middleweight");

    else
        printf("Heavyweight");

    return 0;
}