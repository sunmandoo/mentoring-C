#include <stdio.h>

int main()
{
    float radius;
    float circle_area;
    float pi = 3.14;

    printf("�������� �Է��ϼ��� : ");
    scanf("%f", &radius);

    circle_area = radius * radius * pi;
    printf("���� ���� : %f", circle_area);

    return 0;
}