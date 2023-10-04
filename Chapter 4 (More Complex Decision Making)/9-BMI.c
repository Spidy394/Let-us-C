/*
    catagory on basis of BMI
    date: 4/10/2023
*/

# include <stdio.h>

int main ()
{
    float bmi;

    printf("Enter Body Mass Index(BMI): ");
    scanf("%f", &bmi);

    if (bmi < 1)
    {
        if (bmi <= 15)
        printf("Starvation");

    else if ((15.1 <= bmi) && (17.5 >= bmi))
        printf("Anorexic");

    else if ((17.6 <= bmi) && (18.5 >= bmi))
        printf("Underweight");

    else if ((18.6 <= bmi) && (24.9 >= bmi))
        printf("Ideal");

    else if ((25 <= bmi) && (25.9 >= bmi))
        printf("Overweight");

    else if ((30 <= bmi) && (30.9 >= bmi))
        printf("Obese");

    else 
        printf("Morbidly Obese");
    }

    else
        print("Invalid input");
    
    return 0;
}