/*
    printing all ascii code with its corosponding character.
    date: 30/12/2023
*/

# include <stdio.h>

int main()
{
    int count=0;
    char a;

    while (count < 256)
    {
        a = (char)count;
        printf("\n%d implies %c", count , a);
        count++;
    }
    
    return 0;
}