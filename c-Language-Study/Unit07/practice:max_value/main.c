#include <stdio.h>
#include <limits.h> //자료형의 최댓값과 최솟값이 있는 헤더파일

int main()
{
    char num1 = CHAR_MAX; //char자료형의 최댓값
    short num2 = SHRT_MAX; //short자료형의 최댓값
    int num3 = INT_MAX; //int자료형의 최댓값
    long num4 = LONG_MAX; //long자료형의 최댓값
    long long num5 = LLONG_MAX; //long long자료형의 최댓값

    printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

    return 0;
}