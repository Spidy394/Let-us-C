/*
    to determine what day 1st jan was only by year, taking reference year to be 2001.
    date: 16/09/2023
*/

# include <stdio.h>

int main()
{
    int year, leap, noy, totalDays, day;

    // take input
    printf("Enter year: ");
    scanf("%d", &year);

    // calculate no of years in between
    noy = year - 2001;

    // calculate no of leap years;
    leap = (year/4) - (2001/4) - (year/100) + (2001/100) + (year/400) - (2001/400);

    // calculate no of days 
    totalDays = (noy - leap)*365 + leap*366;

    // determine the day 
    day = (totalDays + 1) % 7;

    if(day == 0)
        printf("It is Sunday");
    
    else if(day == 1)
        printf("It is Monday");

    else if(day == 2)
        printf("It is Tuesday");

    else if(day == 3)
        printf("It is Wednesday");

    else if(day == 4)
        printf("It is Thursday");

    else if(day == 5)
        printf("It is Friday");

    else if(day == 6)
        printf("It is Saturday");

    return 0;
}