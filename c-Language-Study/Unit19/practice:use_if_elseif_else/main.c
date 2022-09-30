#include <stdio.h>

int main()
{
    char c1 = 'c';
    
    if (c1 == 'a') //c1이 a라면 출력 아니라면 else if로 넘어간다.
    {
        printf("a\n");
    }
    else if (c1 == 'b') //c1이 b라면 출력 아니라면 else if로 넘어간다.
    {
        printf("b\n");
    }
    else if (c1 == 'c') //c1이 c라면 출력 아니라면 else if로 넘어간다.
    {
        printf("c\n");
    }
    else if (c1 == 'd') //c1이 d라면 출력 아니라면 else로 넘어간다.
    {
        printf("d\n");
    }
    else //위 조건이 아닌 모든 경우를 출력한다.
    {
        printf("x\n");
    }
    
    return 0;
}