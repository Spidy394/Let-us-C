/*
    Calculation of dimentions of pages from A0 to A8.
     Date: 06/09/2023
*/

#include <stdio.h>

int main() 
{
    int width, height;

    // Calculate and print dimensions for A0
    int A0_width = 1189;
    int A0_height = 841;
    printf("A0 dimensions: %d mm x %d mm\n", A0_width, A0_height);

    // Calculate and print dimensions for A1
    width = A0_height;
    height = A0_width / 2;
    printf("A1 dimensions: %d mm x %d mm\n", width, height);

    // Calculate and print dimensions for A2
    A0_width = width;
    A0_height = height;
    width = A0_height;
    height = A0_width / 2;
    printf("A2 dimensions: %d mm x %d mm\n", width, height);

    // Calculate and print dimensions for A3
    A0_width = width;
    A0_height = height;
    width = A0_height;
    height = A0_width / 2;
    printf("A3 dimensions: %d mm x %d mm\n", width, height);

    // Calculate and print dimensions for A4
    A0_width = width;
    A0_height = height;
    width = A0_height;
    height = A0_width / 2;
    printf("A4 dimensions: %d mm x %d mm\n", width, height);

    // Calculate and print dimensions for A5
    A0_width = width;
    A0_height = height;
    width = A0_height;
    height = A0_width / 2;
    printf("A5 dimensions: %d mm x %d mm\n", width, height);

    // Calculate and print dimensions for A6
    A0_width = width;
    A0_height = height;
    width = A0_height;
    height = A0_width / 2;
    printf("A6 dimensions: %d mm x %d mm\n", width, height);

    // Calculate and print dimensions for A7
    A0_width = width;
    A0_height = height;
    width = A0_height;
    height = A0_width / 2;
    printf("A7 dimensions: %d mm x %d mm\n", width, height);

    // Calculate and print dimensions for A8
    A0_width = width;
    A0_height = height;
    width = A0_height;
    height = A0_width / 2;
    printf("A8 dimensions: %d mm x %d mm\n", width, height);

    return 0;
}
