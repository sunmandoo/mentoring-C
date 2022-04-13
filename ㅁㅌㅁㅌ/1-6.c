#include <stdio.h>

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    if(num1 > num2)
    {
        printf("num1 - num2 = %d", num1 - num2);
    }
     else if(num1 < num2)
    {
        printf("num2 - num1 = %d", num2 - num1);
    }
    else
    {
        printf("두 수가 같다.");
    }

    return 0;
}