// #include <stdio.h>

// int main()
// {
//     int y = 0;
//     for(int i = 1; i <= 10; i++)
//     {
//         y = sum(i);
//     }
//     printf("%d\n", y);

//     return 0;
// }

// int sum(int k)
// {
//     int hab = 0;
//     hab = hab + k;
//     return(hab);
// }

#include <stdio.h>

int main()
{
    float n;
    scanf("%f", &n);
    printf("%f", square(n));
    return 0;
}

float square(float f)
{
    return(f*f);
}