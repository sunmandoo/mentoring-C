#include <stdio.h>

int main()
{
    for (int line = 1; line <= 5; line ++)
    {
        for (int star = 0; star < line; star++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    int star1;
    scanf_s("%d", &star1);
    for (int line = 1; line <= star1; line++)
    {
        for (int star = 0; star < line; star++)
        {
            printf("*");
        }
        printf("\n");
    }
} 