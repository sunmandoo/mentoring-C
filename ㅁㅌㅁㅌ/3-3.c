#include <stdio.h>

int main()
{
	for (int i = 0; i < 4; i++)
	{
		for (int star1 = i; star1 > 0; star1--)      // 왼쪽 윗 날개
		{
			printf("*");
		}

		for (int space1 = i; space1 < 4; space1++)  // 왼쪽 윗 날개와 오른쪽 윗 날개 사이의 공백
		{
			printf(" ");
		}
	
		for (int star2 = i; star2 < 4; star2++)  // 오른쪽 윗 날개
		{
			printf("*");
		}

		printf("\n");
	}

	for (int star = 0; star < 9; star++)    // 중간 별 9개
	{
		printf("*");
	}
	printf("\n");

	for (int i = 0; i < 4; i++)
	{
		for (int space2 = i; space2 < 4; space2++) // 왼쪽 아래 날개 빈공간
		{
			printf(" ");
		}
		for (int star3 = i; star3 >= 0; star3--)  // 왼쪽 아래 날개 별
		{
			printf("*");
		}
		for (int space3 = i; space3 > -1; space3--)   // 왼쪽 아래 날개와 오른쪽 아래 날개 사이의 빈 공간
		{
			printf(" ");
		}
		for (int star4 = i; star4 < 3; star4++)   // 오른쪽 아래 날개 별
		{
			printf("*");
		}

		printf("\n");
	}


	return 0;
}
