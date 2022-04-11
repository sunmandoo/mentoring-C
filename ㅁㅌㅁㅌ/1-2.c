#include <stdio.h>

int main()
{
    int subC;
    float hawC;
    printf("섭씨 온도: ");
    scanf("%d", &subC);
    
    hawC= 1.8 * subC + 32;  
    printf("화씨 온도: %.3f", hawC);

    return 0;
}