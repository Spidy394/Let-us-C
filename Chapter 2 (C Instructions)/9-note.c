/*
    calculating number of notes of 1, 2, 5, 10, 50, 100 for a value N.
    date: 11/09/2023
*/

# include <stdio.h>

int main()
{
    int N, num_1, num_2, num_5, num_10, num_50, num_100;

    printf("Enter value of N: ");
    scanf("%d", &N);

    // counting no of 100 notes 
    num_100 = N / 100;
    N = N % 100;

    // counting no of 50 notes
    num_50 = N / 50;
    N = N % 50;

    // counting no of 10 notes 
    num_10 = N / 10;
    N = N % 10; 

    // counting no of 5 notes 
    num_5 = N / 5;
    N = N % 5;

    // counting no of 2 notes 
    num_2 = N / 2;
    N = N % 2;

    // counting no of 1 notes 
    num_1 = N / 1;

    printf("No of 100 notes: %d\n", num_100);
    printf("No of 50 notes: %d\n", num_50);
    printf("No of 10 notes: %d\n", num_10);
    printf("No of 5 notes: %d\n", num_5);
    printf("No of 2 notes: %d\n", num_2);
    printf("No of 1 notes: %d\n", num_1);

    return 0;
}
