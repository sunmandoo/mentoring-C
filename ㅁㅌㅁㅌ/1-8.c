#include <stdio.h>

int main()
{
    int car_height = 170;
    int tunnel1, tunnel2, tunnel3;

    printf("ù ��° �ͳ� ���� �Է� : ");
    scanf("%d", &tunnel1);
    printf("�� ��° �ͳ� ���� �Է� : ");
    scanf("%d", &tunnel2);
    printf("�� ��° �ͳ� ���� �Է� : ");
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