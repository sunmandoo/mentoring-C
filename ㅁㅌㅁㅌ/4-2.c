#include <stdio.h>

int main()
{
    int num;

    printf("[1]왼쪽직각삼각형 [2]오른쪽직각삼각형 [3]정삼각형 [4]모래시계 [5]바람개비\n0을 누르면 종료\n입력: ");
    scanf("%d", &num);

    num = choose(num);

    return 0;
}

int choose(int type)
{
    while (type != 0)
    {
        if (type == 1)
        {
            for (int line = 1; line <= 5; line++)
            {
                for (int star = 0; star < line; star++)
                {
                    printf("*");
                }
                printf("\n");
            }
            return(main());
        }
        else if (type == 2)
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
            return(main());
        }
        else if (type == 3)
        {
            int k = 1;
            int l = 0;

            for (int i = 0; i < 5; i++)
            {
                for (int h = 4; h > l; h--)
                {
                    printf(" ");
                }

                for (int j = 0; j < k; j++)
                {
                    printf("*");
                }
                printf("\n");
                k = k + 2;
                l = l + 1;
            }
            return(main());
        }
        else if (type == 4)
        {
            int k = 0;
            int j = 0;
            int l = 0;
            int h = 3;

            for (int i = 0; i < 5; i++)
            {
                for (int up_space = 0; up_space < j; up_space++)
                {
                    printf(" ");
                }
                j = j + 1;

                for (int up_star = 9; up_star > k; up_star--)
                {
                    printf("*");
                }
                k = k + 2;

                printf("\n");
            }

            for (int i = 0; i < 4; i++)
            {
                for (int down_space = 3; down_space > l; down_space--)
                {
                    printf(" ");
                }
                l++;

                for (int down_star = 0; down_star < h; down_star++)
                {
                    printf("*");
                }
                h = h + 2;

                printf("\n");
            }
            return(main());
        }
        else if (type == 5)
        {
            for (int i = 1; i < 11; i++)
            {
                for (int leftup_star = 0; leftup_star < i; leftup_star++)
                {
                    printf("*");
                }

                for (int leftup_space = 11; leftup_space > i; leftup_space--)
                {
                    printf(" ");
                }

                for (int rightup_star = 11; rightup_star > i; rightup_star--)
                {
                    printf("*");
                }

                printf("\n");
            }

            for (int i = 1; i < 11; i++)
            {
                for (int leftdown_space = 11; leftdown_space > i; leftdown_space--)
                {
                    printf(" ");
                }

                for (int leftdown_star = 0; leftdown_star < i; leftdown_star++)
                {
                    printf("*");
                }

                for (int rightdown_space = 0; rightdown_space < i; rightdown_space++)
                {
                    printf(" ");
                }

                for (int rightdown_star = 11; rightdown_star > i; rightdown_star--)
                {
                    printf("*");
                }

                printf("\n");
            }
            return(main());
        }
        else
        {
        printf("올바른 숫자 입력\n");
        return(main());
        }
    }
    if (type == 0)
    {
        printf("----------------종료------------------");
    }
}