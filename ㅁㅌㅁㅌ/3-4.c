#include <stdio.h>

int main()
{
	int k = 1;
	int l = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int h = 4; h > l; h--)
		{
			printf(" ");
		}
		l = l + 1;

		for (int j = 0; j < k; j++)
		{
			printf("*");
		}
		k = k + 2;

		printf("\n");
	}

	k = 1;
	l = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int f = 0; f < k; f++)
		{
			printf(" ");
		}
		k++;

		for (int y = 7; y > l; y--)
		{
			printf("*");
		}
		l = l + 2;

		printf("\n");
	}

	return 0;
}

/*

				*
			   ***
			  *****
			 *******
			********* 
			 *******
			  *****
			   ***
			    *
					    
*/