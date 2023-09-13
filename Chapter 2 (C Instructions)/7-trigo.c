/*
    values of trigonometric ratios of a given angle.
    Date: 10/09/2023.
*/

# include <stdio.h>
# include <math.h>
int main()
{
    float inDegree, inRadian, sinValue, cosValue, tanValue; 

    printf("Enter angle in Degree: ");
    scanf("%f", &inDegree);

    inRadian = inDegree * 3.14 / 180 ; 

    sinValue = sin(inRadian);
    cosValue = cos(inRadian);
    tanValue = tan(inRadian);

    printf("sin %.2f = %.2f\n", inDegree, sinValue);
    printf("cos %.2f = %.2f\n", inDegree, cosValue);
    printf("tan %.2f = %.2f\n", inDegree, tanValue);
    printf("cot %.2f = %.2f\n", inDegree, (1/tanValue));
    printf("sec %.2f = %.2f\n", inDegree, (1/cosValue));
    printf("cosec %.2f = %.2f\n", inDegree, (1/sinValue));
    
    return 0;
}
