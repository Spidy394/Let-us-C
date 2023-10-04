/*
    determine the zodiac sign by date of birth
    date: 4/10/2023
*/

# include <stdio.h>

int main()
{
    int month, date;

    printf("Enter Birth Month (1-12): ");
    scanf("%d", &month);
    printf("Enter date (1-31): ");
    scanf("%d", &date);

    if ((month >= 1 && month <= 12) && (date >= 1 && date <= 31))
    {
        if ((month == 12 && date >= 22) || (month == 1 && date <= 19))
            printf("Capricorn");

        else if ((month == 1 && date >= 20) || (month == 2 && date <= 17))
            printf("Aquarius");

        else if ((month == 2 && date >= 18) || (month == 3 && date <= 19))
            printf("Pisces");

        else if ((month == 3 && date >= 20) || (month == 4 && date <= 19))
            printf("Aries");

        else if ((month == 4 && date >= 20) || (month == 5 && date <= 20))
            printf("Taurus");

        else if ((month == 5 && date >= 21) || (month == 6 && date <= 20))
            printf("Gemini");

        else if ((month == 6 && date >= 21) || (month == 7 && date <= 22))
            printf("Cancer");

        else if ((month == 7 && date >= 23) || (month == 8 && date <= 22))
            printf("Leo");

        else if ((month == 8 && date >= 23) || (month == 9 && date <= 22))
            printf("Virgo");

        else if ((month == 9 && date >= 23) || (month == 10 && date <= 22))
            printf("Libra");

        else if ((month == 10 && date >= 23) || (month == 11 && date <= 21))
            printf("Scorpio");

        else 
            printf("Sagittarius");
    }

    else
        printf("Invalid input");

    return 0;
}