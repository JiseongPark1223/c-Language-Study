#include <stdio.h>
//역삼각형으로 별 출력하기
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if (j < i) // j < i 상황일때 공백을 출력하면 i가 커지면 공백도 출력이 된다.
            {          // 따라서 공백을 출력한뒤 남은 공간에 별을 출력하면 역삼각형 모양이 된다.
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}