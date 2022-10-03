#include <stdio.h>

int main()
{
    int num1 = 0;
    //2, 4, 8을 입력했을 때 각각 2, 4, 8을 출력하도록 만들어라.
    scanf("%d", &num1);
    
    switch (num1)
    {
        case 1 << 1: //0000 0010(2)이기 때문에 1에서 왼쪽으로 1번 시프트
            printf("2\n");
            break;
        case 1 << 2: //0000 0100(4)이기 때문에 1에서 왼쪽으로 2번 시프트
            printf("4\n");
            break;
        case 1 << 3: //0000 1000(8)이기 때문에 1에서 왼쪽으로 3번 시프트
            printf("8\n");
            break;
        default:
            printf("default\n");
            break;
    }
    
    return 0;
}