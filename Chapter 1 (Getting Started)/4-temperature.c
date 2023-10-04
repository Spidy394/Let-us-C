/*
    Temp. convertion from  Fahrenheit to Centigrade
    Date: 06/09/2023
*/

# include<stdio.h>

int main()
{
    // variable declation
    float f, c;

    // taking input of temperature in fahrenhit
    printf("Enter temperature in  Fahrenheit: ");
    scanf("%f", &f);

    // converting fahrenheit
    c = ((f - 32)*5)/9;

    // printint result
    printf("Temperature in Centigrade is: %.2f" ,c);
    
    return 0;
}
