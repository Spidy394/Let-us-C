/*
    calculation of wind chill factor.
    date: 11/09/2023
*/

# include <stdio.h>
# include <math.h>

int main()
{
    // variable declaration
    float t, v, wcf;

    // taking inputs of t and v
    printf("Enter termperature in fahrenheit: ");
    scanf("%f", &t);
    printf("Enter wind speed in mph: ");
    scanf("%f", &v);

    // calculating wind chill factor 
    wcf = 35.74 + 0.6215*t + ( 0.4275*t - 35.75 ) * (pow(v,0.16));

    // print result
    printf("Wind Chill factor: %f fahrenheit", wcf);
    
    return 0;
}
