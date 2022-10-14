#include <stdio.h>

int main()
{
    int matrix[5][5];
    //주대각선을 기준으로 값을 뒤집은 행렬을 전치행렬이라 한다.
    scanf("%d %d %d %d %d",
        &matrix[0][0], &matrix[0][1], &matrix[0][2], &matrix[0][3], &matrix[0][4]);
    scanf("%d %d %d %d %d",
        &matrix[1][0], &matrix[1][1], &matrix[1][2], &matrix[1][3], &matrix[1][4]);
    scanf("%d %d %d %d %d",
        &matrix[2][0], &matrix[2][1], &matrix[2][2], &matrix[2][3], &matrix[2][4]);
    scanf("%d %d %d %d %d",
        &matrix[3][0], &matrix[3][1], &matrix[3][2], &matrix[3][3], &matrix[3][4]);
    scanf("%d %d %d %d %d",
        &matrix[4][0], &matrix[4][1], &matrix[4][2], &matrix[4][3], &matrix[4][4]);
        
    for (int i = 0; i < sizeof(matrix)/sizeof(matrix[0]); i++)
    {
        for (int j = 0; j < sizeof(matrix[0])/sizeof(matrix[0][0]); j++)
        {
            printf("%d ", matrix[j][i]); //따라서 가로배열과 세로배열의 순서를 바꾸면 전치행렬이 된다.
        }
        printf("\n");
    }
    return 0;
}