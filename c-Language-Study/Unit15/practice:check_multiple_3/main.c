#include <stdio.h>

int main()
{
    int num1 = 15;
    int num2 = 27;
    int num3 = 3;
    
    num1 %= num3; //3으로 나누었을때 나머지가 0이 나오면 3의 배수이다.
    num2 %= num3; //따라서 두 수 모두 3으로 나누었을 때의 나머지를 구한다.
    
    printf("%d\n", num1);
    printf("%d\n", num2);
    
    return 0;
}