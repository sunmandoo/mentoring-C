#include <stdio.h>

int main()
{
	char str[6] = ""; // 1 부터 10000까지  [0] [1] [2] [3] [4] [\0]

	scanf("%s", str);

	if (str[0] == '\0')
	{
		return 0;
	}
	else if (str[1] == '\0')
	{
		int a = str[0] - 48;
		
		if (a < 0 || a > 9)
		{
			printf("return");
			return 0;
		}

		int sum = a;

		printf("true");
	}
	else if (str[2] == '\0')
	{
		int a = str[0] - 48;
		int b = str[1] - 48;

		if ((a < 0 || a > 9) || (b < 0 || b > 9))
		{
			printf("return");
			return 0;
		}

		int sum = a + b;
		int num = a * 1 + b * 10;

		if (num % sum == 0)
		{
			printf("true");
		}
		else
		{
			printf("false");
		}
	}
	else if (str[3] == '\0')
	{
		int a = str[0] - 48;
		int b = str[1] - 48;
		int c = str[2] - 48;

		if ((a < 0 || a > 9) || (b < 0 || b > 9) || (c < 0 || c > 9))
		{
			printf("return");
			return 0;
		}

		int sum = a + b + c;
		int num = a * 1 + b * 10 + c * 100;


		if (num % sum == 0)
		{
			printf("true");
		}
		else
		{
			printf("false");
		}
	}
	else if (str[4] == '\0')
	{
		int a = str[0] - 48;
		int b = str[1] - 48;
		int c = str[2] - 48;
		int d = str[3] - 48;

		if ((a < 0 || a > 9) || (b < 0 || b > 9) || (c < 0 || c > 9) || (d < 0 || d > 9))
		{
			printf("return");
			return 0;
		}

		int sum = a + b + c + d;
		int num = a * 1 + b * 10 + c * 100 + d * 1000;

		if (num % sum == 0)
		{
			printf("true");
		}
		else
		{
			printf("false");
		}
	}
	else if (str[5] == '\0')
	{
		if (str == "1000")
		{
			printf("true");
		}
		else
		{
			printf("return");
		}
	}

	return 0;
}

/*
	#include <stdio.h>

int main()
{
	char str[6]; // 1 부터 10000까지  [0] [1] [2] [3] [4] [\0]

	scanf("%s", str);

	int i = 0;
	int j, k = 1;
	int num = 0;   // 하샤드 수
	int sum = 0;   // 각 자릿수의 합

	if (str[i] - 48 > 9 || str[i] - 48 < 0)
	{
		printf("return \n");    // 각 자리의 수가 0 미만 9 초과일 경우 return 출력
		
		return 0;
	}
	
	while (str[i] != '\0')
	{
		str[i] = str[i] - 48; //  입력 받은 각자리 숫자가 문자이므로 진짜 숫자로 변환
		sum = sum + str[i];   //  각 자릿수의 합
		j = str[i] * k;       //  변수 j에 각각 숫자의 자릿수를 차례로 매겨줌.
		num = num + j;        //  자릿수를 매겨준 수를 다 더하여 하샤드 수를 만들어줌.
		i++;
		k = k * 10;
	}



	if (num % sum == 0)
	{
		printf("true \n");
	}
	else
	{
		printf("false \n");
	}
	
	printf("%d\n", num);
	printf("%d\n", sum);
	printf("%d\n", str[1]);
	printf("%d\n", str[2]);

	return 0;
}
*/