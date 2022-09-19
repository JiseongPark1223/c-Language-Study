#include <stdio.h>
#include <limits.h> //정수의 최솟값과 최댓값을 담은 헤더파일

int main()
{
    char num1 = CHAR_MIN; //char 자료형의 최솟값을 나타낸다
    unsigned short num2 = 0;
    int num3 = INT_MIN; //int 자료형의 최솟값을 나타낸다
    unsigned long num4 = 0;
    long long num5 = LLONG_MIN; //long long 자료형의 최솟값을 나타낸다

    printf("%d %u %d %lu %lld\n", num1, num2, num3, num4, num5);

    return 0;
}