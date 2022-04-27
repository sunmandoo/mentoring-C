#include <stdio.h>

int main()
{
	int k = 1;
	int l = 0;                      

	for (int i = 0; i < 4; i++)
	{
		for (int h = 4; h > l; h--)
		{
			printf(" ");
		}

		for (int j = 0; j < k; j++)       
		{
			printf("*");
		}
		printf("\n");
		k = k + 2;
		l = l + 1;
	}

	return 0;
}

/*
               *
              ***
             ******
            ********
*/