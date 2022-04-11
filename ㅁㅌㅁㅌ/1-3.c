#include <stdio.h>

int main()
{
    int time;
    int minute;
    int second;

    scanf("%d", &time);

    minute = time / 60;
    second = time % 60;

    printf("%d %d", minute, second);

    return 0;
}