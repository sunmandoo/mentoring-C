#include <stdio.h>

int main()
{
    int pick;
	printf("1번: 다이아 \n2번: 모래시계\n3번: 부매랑\n0번 입력시 종료\n입력: ");
    scanf("%d", &pick);

	pick = choose(pick);

    return 0;
}

int choose(int type)
{
	while (type != 0)
	{

		if (type == 1)
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
			break;
		}
		else if (type == 2)
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
			break;
		}
		else if (type == 3)
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
			break;
		}
		else
		{
			printf("제대로된 숫자를 입력 (0 입력시 종료)\n\n");
			return(main());
		}
	}
}