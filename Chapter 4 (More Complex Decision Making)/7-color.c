/*
    to convert rgb to cmyk
    date: 4/10/2023
*/

# include <stdio.h>

int main()
{
    float r, g, b, c, m, y, k, w, max = 0;
    
    printf("Enter RGB value: ");
    scanf("%f %f %f", &r, &g, &b);

    if ((r >= 0 && g >= 0 && b >= 0) && (r <= 255 && g <= 255 && b <= 255))
    {
        if (r > max) 
            max = r;

        if (g > max)
            max = g;

        if (b > max) 
            max = b;

        w = max / 255;

        if (w == 0) 
        {
            c = m = y = 0;
            k = 1;
        }
        
         else 
        {
            c = (w - (r/255)) / w;
            m = (w - (g/255)) / w;
            y = (w - (b/255)) / w;
            k = 1 - w;
        }

        printf("CMYK: %.2f %.2f %.2f %.2f", c, m, y, k);
    }

    else
        printf("Invalid input");

    return 0;
}