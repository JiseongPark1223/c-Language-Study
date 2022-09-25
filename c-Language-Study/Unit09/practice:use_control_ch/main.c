#include <stdio.h>

int main()
{
    char c1 = '\t'; //제어문자인 수평탭은 '/t'로 사용, /r은 복귀, /n은 개행으로 사용함.
    
    printf("Hello");
    printf("%c", c1);
    printf("world\n");
    
    return 0;
}