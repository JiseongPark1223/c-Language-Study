#include <stdio.h>

void transpose(int (*matrix)[4], int n) //이차원 배열과 배열의 크기를 입력받는 함수를 선언한다.
{
    int tmp; //교체할 배열의 값을 임시적으로 저장할 변수를 선언한다.
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            tmp = matrix[i][j]; //주대각선을 기준으로 값을 뒤집는다.
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = tmp;
        }
    }
}

int main()
{
    int matrix[4][4];

    int n = sizeof(matrix[0]) / sizeof(int); //배열의 개수를 구하고 n에 저장한다.
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]); //각 배열들을 입력받는다.
        }
    }

    transpose(matrix, n); //함수에 알맞은 값들을 넣는다.

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)

        {
            printf("%d ", matrix[i][j]); //배열을 순서대로 출력한다.
        }

        printf("\n");
    }

    return 0;
}