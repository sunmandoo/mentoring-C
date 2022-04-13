#include <stdio.h>

int main()
{
    int car_height = 170;
    int tunnel1, tunnel2, tunnel3;

    printf("첫 번째 터널 높이 입력 : ");
    scanf("%d", &tunnel1);
    printf("두 번째 터널 높이 입력 : ");
    scanf("%d", &tunnel2);
    printf("세 번째 터널 높이 입력 : ");
    scanf("%d", &tunnel3);

    if(tunnel1 <= 170)
    {
        printf("CRASH\n");
    }
    else if(tunnel1 > 170)
    {
        printf("PASS\n");
    }

    if(tunnel2 <= 170)
    {
        printf("CRASH\n");
    }
    else if(tunnel2 > 170)
    {
        printf("PASS\n");
    }

    if(tunnel3 <= 170)
    {
        printf("CRASH\n");
    }
    else if(tunnel3 > 170)
    {
        printf("PASS\n");
    }

    return 0;
}