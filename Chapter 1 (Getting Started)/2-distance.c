/*
    Convertion of distance from km to meters, feet, inches, cm.
    Date:06/09/2023.
*/

# include<stdio.h>

int main()
{
    // declaration of variable
    float km;

    // taking inputs 
    printf("Enter distance in Km: ");
    scanf("%f", &km);

    // printing results
    printf("\nDistance in meters: %.2f", km * 1000);
    printf("\nDistance in feets: %.2f", km * 3280.84);
    printf("\nDistance in inches: %.2f", km * 39370.08 );
    printf("\nDistance in centimeters: %.2f", km * 100000);
    
    return 0;
}
