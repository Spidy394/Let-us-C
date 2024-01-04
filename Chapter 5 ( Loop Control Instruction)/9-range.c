/*
    to find the range of a set of number given by the user
	date: 4/1/2024
*/

#include <stdio.h>

int main()
{
	int limit, current, min=1, max=1;

	printf("Enter a limit: ");
	scanf("%d", &limit);

	while(limit!=0)
	{
		printf("Enter a num: ");
		scanf("%d", &current);

		    if(current>max && current>min)
		    {
			    max=current;
		    }
            
		    if(current<max)
		    {   
			    min=current;
		    }

            limit--;
	}
		
	printf("Range: %d", max - min);

	return 0;
}