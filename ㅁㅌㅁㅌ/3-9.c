#include <stdio.h>

int main()
{
    int p;

    printf("Input number: ");
    scanf("%d", &p);

    p = number(p);
    return 0;
}

int number(int i)
{
    int k;
    k = i;
    int check = 0;

    for (int j = 2; j < i; j++)
    {
        k = i % j;

        if (k == 0)
        {
            check = 1;
            break;
        }
    }

    if (check == 1)
    {
        printf("no prime_number");
    }
    else
    {
        printf("yes prime_number");
    }
}