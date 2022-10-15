#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int row, col, i, j, x, y;
    
    scanf("%d %d\n", &row, &col); //가로와 세로의 규격을 입력받는다.
    
    char **m = malloc(sizeof(char *) * (col)); //이중포인터에 (char*) * col크기의 동적메모리를 할당한다.
    
    for (i = 0; i < col; i++) //세로 줄 수 만큼 for문을 반복한다.
    {
        m[i] = malloc(sizeof(char) * (row + 1)); //char * (row + 1)크기의 동적메모리를 할당한다.
    }

    for (i = 0; i < col; i++)
    {
      scanf("%s", m[i]); //지뢰와 지뢰가 아닌 요소를 입력받는다.
    }
    
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++) //입력받은 지뢰를 순서대로 반복한다.
        {
            if (m[i][j] == '*') 
            {
              continue;
            }
            else
            {
                m[i][j] = '0'; //지뢰가 아니면 문자 '0'을 저장한다.
            }
        }
    }
    
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++) //입력받은 지뢰를 반복한다.
        {
            if (m[i][j] == '*') //만일 배열이 지뢰라면 주변 8칸에 숫자 1을 더한다.
            {
                for (y = i - 1; y <= i + 1; y++)
                {
                    for (x = j - 1; x <= j + 1; x++)
                    {
                        if (y < 0 || x < 0 || y >= col || x >= row || m[y][x] == '*') //음수거나 배열을 넘어가는 숫자나 지뢰가 있는 배열에는 1을 더하지 않는다.
                        {
                            continue;
                        }
                        m[y][x] += 1;
                    }
                }
            }
        }
    }
    
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%c", m[i][j]); //지뢰와 숫자를 출력한다. 
        }
        printf("\n");
    }
    
    for (i = 0; i < col; i++)
    {
        free(m[i]); //char * (row + 1)크기의 동적메모리를 해제한다.
    }
    
    free(m); //이중포인터에 (char*) * col크기의 동적메모리를 해제한다.
    
    return 0;
}