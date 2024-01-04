/*
    matchstick game
    date:4/1/2024
*/

#include <stdio.h>

int main() 
{
    int matchSticks = 21, userPick, computerPick;

    printf("Welcome to the Matchstick Game!\n");

    while (matchSticks > 0) 
    {
        printf("There are %d matchsticks. How many matchsticks do you want to pick (1-4)? ", matchSticks);
        scanf("%d", &userPick);

        while (userPick < 1 || userPick > 4 || userPick > matchSticks) 
        {
            printf("Invalid input. Please pick 1 to 4 matchSticks: ");
            scanf("%d", &userPick);
        }

        printf("You picked %d matchSticks.\n", userPick);

        computerPick = 5 - userPick;
        printf("Computer picked %d matchSticks.\n", computerPick);

        matchSticks -= (userPick + computerPick);
    }

    if (matchSticks <= 0) 
    {
        printf("You picked the last matchstick. Computer wins!\n");
    }

    return 0;
}
