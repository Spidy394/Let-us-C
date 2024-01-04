/*
    for printing all armstong number b/w 1 to 500
    date: 4/1/2024
*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0, result = 0;

    printf("Armstrong numbers between 1 and 500 are:\n");

    for (num = 1; num <= 500; num++) {
        originalNum = num;
        n = 0;
        result = 0;

        
        while (originalNum != 0) {
            originalNum /= 10;
            n++;
        }

        originalNum = num; 

        
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }

        
        if (result == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}