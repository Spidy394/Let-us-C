# 📌 Chapter 4: More Complex Decision Making

1. Any year is entered through the keyboard, write a program to
determine whether the year is leap or not. Use the logical operators
&& and ||.

1. Any character is entered through the keyboard, write a program to
determine whether the character entered is a capital letter, a small
case letter, a digit or a special symbol.
The following table shows the range of ASCII values for various
characters:

    | Characters      |  ASCII Values                        |
    |:---------------:|:------------------------------------:|
    |   A – Z         |     65 – 90                          |
    |   a – z         |    97 – 122                          |
    |   0 – 9         |    48 – 57                           |
    | special symbols |  0 - 47, 58 - 64, 91 - 96, 123 - 127 |

1. A certain grade of steel is graded according to the following
conditions:

        (i) Hardness must be greater than 50 
        (ii) Carbon content must be less than 0.7
        (iii) Tensile strength must be greater than 5600

    The grades are as follows:  

        Grade is 10 if all three conditions are met 
        Grade is 9 if conditions (i) and (ii) are met 
        Grade is 8 if conditions (ii) and (iii) are met 
        Grade is 7 if conditions (i) and (iii) are met 
        Grade is 6 if only one condition is met 
        Grade is 5 if none of the conditions are met

    Write a program, which will require the user to give values of
hardness, carbon content and tensile strength of the steel under
consideration and output the grade of the steel.

1. If the three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is valid or not. The
triangle is valid if the sum of two sides is greater than the largest of the three sides.

1. If the three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is isosceles,
equilateral, scalene or right angled triangle.

1. In boxing the weight class of a boxer is decided as per the following 
table. Write a program that receives weight as input and prints out 
the boxer’s weight class. 

    | Boxer Class    | Weight in Pounds |
    |:--------------:|:----------------:|
    |  Flyweight     | < 115            |
    | Bantamweight   | 115 - 121        | 
    | Featherweight  | 122 - 153        |
    | Middleweight   | 154 – 189        |
    | Heavyweight    | >= 190           |

1. In digital world colors are specified in Red-Green-Blue (RGB) format, 
with values of R, G, B varying on an integer scale from 0 to 255. In 
print publishing the colors are mentioned in Cyan-Magenta-Yellow
Black (CMYK) format, with values of C, M, Y, and K varying on a real 
scale from 0.0 to 1.0. Write a program that converts RGB color to 
CMYK color as per the following formulae:  

        White = Max(Red/255, Green/255, Blue/255)

        Cyan = (White - Red/255) / White

        Magenta = (White - Green/255) / White

        Yellow = (White - Blue/255) / White

        Black = 1 - White

        Note that if the RGB values are all 0, then the CMY values are all 0 and the K value is 1. 

1. Write a program that receives month and date of birth as input and 
prints the corresponding Zodiac sign based on the following table: 

    | Sun Sign       | From - To                  |
    | :------------: | :------------------------: |
    | Capricorn      | December 22 - January 19   |
    | Aquarius       | January 20 - February 17   |
    | Pisces         | February 18 - March 19     |
    | Aries          | March 20 - April 19        |
    | Taurus         | April 20 - May 20          |
    | Gemini         | May 21 - June 20           |
    | Cancer         | June 21 - July 22          |
    | Leo            | July 23 - August 22        |
    | Virgo          | August 23 - September 22   |
    | Libra          | September 23 - October 22  |
    | Scorpio        | October 23 - November 21   |
    | Sagittarius    | November 22 - December 21  |

1. The Body Mass Index (BMI) is defined as ratio of the weight of a 
person (in kilograms) to the square of the height (in meters). Write 
a program that receives weight and height, calculates the BMI, and 
reports the BMI category as per the following table:

    | BMI Category        | BMI Rang       |
    | :-----------------: | :------------: |
    | Starvation          | < 15           |
    | Anorexic            | 15.1 to 17.5   |
    | Underweight         | 17.6 to 18.5   |
    | Ideal               | 18.6 to 24.9   |
    | Overweight          | 25 to 25.9     |
    | Obese               | 30 to 30.9     |
    | Morbidly Obese      | >= 40          |
