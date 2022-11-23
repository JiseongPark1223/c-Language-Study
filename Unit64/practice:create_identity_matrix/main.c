#include <stdio.h>

void setIdentityMatrix(float (*arr)[4], int count) //2차원 배열을 매개변수로 이용하는 함수를 선언한다.
{                                                  //2차원 배열을 사용할때는 배열의 가로크기를 지정해준다.
    for (int i = 0; i < count; i++)
    {
        arr[i][i] = 1;
    }
}

int main()
{
    float matrix[4][4] = {0.0f, };
    
    int n = sizeof(matrix[0]) / sizeof(float); //배열 요소의 개수를 구한다.
    
    setIdentityMatrix(matrix, n); //함수에 각 값들을 넣는다.
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%f ", matrix[i][j]); //매개변수로 배열을 사용하였으므로 함수의 값은 변한다.
        }                                //변한 값들을 출력한다.
        printf("\n");
    }
    
    return 0;
}