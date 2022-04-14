#include <stdio.h>

int main()
{
    for (int line = 1; line <= 5; line++)
    {
        for (int space = 5; space > line; space--)
        {
            printf(" ");
        }
        for (int star = 0; star < line; star++)
        {
            printf("*");
        } 
        printf("\n");
    }
}
