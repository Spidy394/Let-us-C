/*
    Convertion of distance from km to meters, feet, inches, cm.
    Date:06/09/2023.
*/

# include<stdio.h>

int main()
{
    float km, m, f, i, cm;

    printf("Enter distance in Km: ");
    scanf("%f", &km);

    m = km * 1000;
    cm = km * 100000;
    f = km * 3280.84;
    i = km * 39370.08;

    printf("\nDistance in meters: %.2f", m);
    printf("\nDistance in feets: %.2f", f);
    printf("\nDistance in inches: %.2f", i);
    printf("\nDistance in centimeters: %.2f", cm);
    return 0;
}