#include <stdio.h>

int main()
{
	int k = 0;
	int j = 0;
	int l = 0;
	int h = 3;

	for (int i = 0; i < 5; i++)
	{
		for (int up_space = 0; up_space < j; up_space++)
		{
			printf(" ");
		}
		j = j + 1;

		for (int up_star = 9; up_star > k; up_star--)
		{
			printf("*");
		}
		k = k + 2;

		printf("\n");
	}

	for (int i = 0; i < 4; i++)
	{
		for (int down_space = 3; down_space > l; down_space--)
		{
			printf(" ");
		} 
		l++;

		for (int down_star = 0; down_star < h; down_star++)
		{
			printf("*");
		}
		h = h + 2;

		printf("\n");
	}

	return 0;
}

/*
            *********
             *******
              *****
               ***
                *
               ***
              *****
             *******
            *********

*/
