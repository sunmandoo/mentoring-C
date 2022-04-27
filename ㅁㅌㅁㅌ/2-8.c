#include <stdio.h>

int main()
{
    int a, c;
    scanf("%d", &a);

    c = a;

    for(int i = 1, a = 1; i <= c; i++, a++)
    {
        printf("%d : %d\n", a, i * i);
    }

    return 0;
}