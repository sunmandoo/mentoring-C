#include <stdio.h>

int main()
{
    int first;
    int second;
    int change;

    printf("변수1의 값: ");
    scanf("%d", &first);
    
    printf("변수2의 값: ");
    scanf("%d", &second);

    change = first;
    first = second;
    second = change;
    printf("변수1의 값: %d\n", first);
    printf("변수2의 값: %d", second);

    return 0;
}