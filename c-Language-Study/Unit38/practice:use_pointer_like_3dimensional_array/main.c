#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int depth, column; //높이 2, 세로 크기 3, 가로크기 5인 3차원 배열에 100을 넣고 출력하라.
    
    long long ***m = malloc(sizeof(long long **) * 2); //삼중포인터 m에 (long long **) * 2 크기의 동적 메모리를 할당한다.
    
    for (depth = 0; depth < 2; depth++) //높이 2만큼 반복한다.
    {
        m[depth] = malloc(sizeof(long long *) * 3); //세로 공간에 해당하는 동적메모리를 할당한다.
        
        for (column = 0; column < 3; column++)
        {
            m[depth][column] = malloc(sizeof(long long) * 5); //가로 공간에 해당하는 동적메모리를 할당한다.
        }
    }
    
    m[1][2][4] = 100; //m[1][2][4]에 100을 할당한다.
    printf("%lld", m[1][2][4]);
    
    for (depth = 0; depth < 2; depth++)
    {
        for (column = 0; column < 3; column++)
        {
            free(m[depth][column]); //가로 공간에 해당하는 동적메모리를 해제한다.
        }
        free(m[depth]); //세로 공간에 해당하는 동적메모리를 해제한다.
    }
    
    free(m); //높이에 해당하는 동적메모리를 해제한다.
    
    return 0;
}
