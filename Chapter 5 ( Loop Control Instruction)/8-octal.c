/*
    to find octal equivalent of a number given by the user 
    date: 4/1/2024
*/

# include <stdio.h>

int main() 
{
    int decimalNo,  octalDigits, reverseOctalDigits = 0, position = 1;

    printf("Enter a number to find its octal equi: ");
    scanf("%d", &decimalNo);

    if (decimalNo == 0) 
    {
        printf("Octal equivalent: O");
    }

    else
    {
        while (decimalNo != 0) 
        {
            octalDigits = decimalNo % 8;
            reverseOctalDigits = reverseOctalDigits + octalDigits * position;
            decimalNo = decimalNo / 8;
            position = position * 10;
        }
    }

    printf("Octal equivalent: %d", reverseOctalDigits);
    
    return 0;
}