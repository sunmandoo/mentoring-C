#include <stdio.h>

int main()
{
    float radius;
    float circle_area;
    float pi = 3.14;

    printf("반지름을 입력하세요 : ");
    scanf("%f", &radius);

    circle_area = radius * radius * pi;
    printf("원의 면적 : %f", circle_area);

    return 0;
}