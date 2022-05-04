#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", square(n));
    return 0;
}

int square(int f)
{
    return(f*f);
}

/* 
main 함수에서 정수형 변수 n 선언 
변수 n에 값 입력
printf함수를 사용해서 square 함수에 n 값을 보내주고
f에 n값이 대입되고 f*f 즉, n*n의 값을 return해준다.
그렇게 square(n)에 값에 n*n값이 반환되어
n의 제곱값이 출력된다.
*/

// #include <stdio.h>

// int main()         --->  이렇게도 됨.
// {
//     int n, i;
//     scanf("%d", &n);
//     i = square(n);
//     printf("%d", i);
//     return 0;
// }

// int square(int f)
// {
//     return(f*f);
// }



