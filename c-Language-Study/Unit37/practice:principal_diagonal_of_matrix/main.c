#include <stdio.h>

int main()
{
    int matrix[8][8] = {
        {  1,  2,  3,  4,  5,  6,  7,  8 },
        {  9, 10, 11, 12, 13, 14, 15, 16 },
        { 17, 18, 19, 20, 21, 22, 23, 24 },
        { 25, 26, 27, 28, 29, 30, 31, 32 },
        { 33, 34, 35, 36, 37, 38, 39, 40 },
        { 41, 42, 43, 44, 45, 46, 47, 48 },
        { 49, 50, 51, 52, 53, 54, 55, 56 },
        { 57, 58, 59, 60, 61, 62, 63, 64 }
    }; //위 행렬의 주대각선 성분을 구하여야 한다.
    
    for (int i = 0; i < sizeof(matrix)/sizeof(matrix[0]); i++)
    {
        printf("%d ", matrix[i][i]); //행과 열의 순서가 같은 배열만 출력해야하기 때문에 다음과 같이 출력한다.
    }
    return 0;
}