/*
    Temp. convertion from  Fahrenheit to Centigrade
    Author: Shubhodeep Mondal, Date: 06/09/2023
*/

# include<stdio.h>

int main()
{
    float f, c;
    
    printf("Enter temperature in  Fahrenheit: ");
    scanf("%f", &f);

    c = ((f - 32)*5)/9;

    printf("Temperature in Centigrade is: %.2f" ,c);
    
    return 0;
}