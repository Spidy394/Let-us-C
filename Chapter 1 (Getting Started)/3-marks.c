/*
    Calculation of aggregate marks and percentage.
    Date: 06/09/2023
*/

# include<stdio.h>

int main()
{
    // variable declaration 
    int s1, s2, s3, s4, s5, total;
    float agg, per;

    // taking inputs
    printf("Enter marks of Subject 1 out of 100: ");
    scanf("%d", &s1);
    printf("Enter marks of Subject 2 out of 100: ");
    scanf("%d", &s2);
    printf("Enter marks of Subject 3 out of 100: ");
    scanf("%d", &s3);
    printf("Enter marks of Subject 4 out of 100: ");
    scanf("%d", &s4);
    printf("Enter marks of Subject 5 out of 100: ");
    scanf("%d", &s5);
    
    total = s1 + s2 + s3 + s4 + s5 ; // calculating total marks 
    agg =  total / 5.0; // calculating aggregate marks
    per = (total/500.0)*100; // calculating percentage

    // printing aggregate marks and percentge
    printf("Aggregate marks: %.2f", agg);
    printf("\nPercentage: %.2f%%", per);

    return 0;
}
