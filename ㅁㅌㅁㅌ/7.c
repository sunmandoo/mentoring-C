#include <stdio.h>

int main()
{
    int first;
    int second;
    int change;

    printf("����1�� ��: ");
    scanf("%d", &first);
    
    printf("����2�� ��: ");
    scanf("%d", &second);

    change = first;
    first = second;
    second = change;
    printf("����1�� ��: %d\n", first);
    printf("����2�� ��: %d", second);

    return 0;
}