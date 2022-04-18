#include <stdio.h>

int main()
{
	int d1, d2, d3;              // dice1, dice2, dice3
	scanf("%d %d %d", &d1, &d2, &d3);

	if (d1 == d2 && d1 == d3 && d2 == d3)   // 주사위 3개가 다 같을 경우
	{ 
		printf("%d", 10000 + d1 * 1000);     
	}
	else if ((d1 == d2 && d2 != d3) || (d2 == d3 && d3 != d1) || (d1 == d3 && d2 != d3)) // 주사위 2개만 같을 경우
	{
		if (d1 == d2)  // d1과 d2가 같을 경우
		{
			printf("%d", 1000 + d1 * 100);
		}
		else if (d1 == d3)  // d1과 d3가 같을 경우
		{
			printf("%d", 1000 + d1 * 100);
		}
		else // d2와 d3가 같을 경우
		{
			printf("%d", 1000 + d3 * 100);
		}
	}
	else // 주사위 3개가 다 다를 경우
	{
		if ((d1 > d2 && d2 > d3) || (d1 > d3 && d3 > d2)) // d1이 제일 클 경우
		{
			printf("%d", d1 * 100);
		}
		else if ((d2 > d1 && d1 > d3) || (d2 > d3 && d3 > d1)) //d2가 제일 클 경우
		{
			printf("%d", d2 * 100);
		}
		else  // d3가 제일 클 경우
		{
			printf("%d", d3 * 100);
		}
	}
	return 0;
}