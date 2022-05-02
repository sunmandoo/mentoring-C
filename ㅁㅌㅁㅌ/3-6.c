#include <stdio.h>

int main()
{
	for (int i = 1; i < 11; i++)
	{
		for (int leftup_star = 0; leftup_star < i; leftup_star++)
		{
			printf("*");
		}

		for (int leftup_space = 11; leftup_space > i; leftup_space--)
		{
			printf(" ");
		}

		for (int rightup_star = 11; rightup_star > i; rightup_star--)
		{
			printf("*");
		}

		printf("\n");
	}

	for (int i = 1; i < 11; i++)
	{
		for (int leftdown_space = 11; leftdown_space > i; leftdown_space--)
		{
			printf(" ");
		}

		for (int leftdown_star = 0; leftdown_star < i; leftdown_star++)
		{
			printf("*");
		}
		
		for (int rightdown_space = 0; rightdown_space < i; rightdown_space++)
		{
			printf(" ");
		}

		for (int rightdown_star = 11; rightdown_star > i; rightdown_star--)
		{
			printf("*");
		}

		printf("\n");
	} 

	return 0;
}
