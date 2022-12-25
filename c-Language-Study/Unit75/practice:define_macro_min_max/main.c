#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? a : b) //삼항연산자를 이용해 MIN과 MAX 매크로를 정의
#define MAX(a, b) ((a) > (b) ? a : b) 

int main()
{
    printf("%d\n", MIN(10, 20)); //매크로를 이용하여 결과를 출력
    printf("%d\n", MAX(4 & 4, 2 & 2));
    
    return 0;
}