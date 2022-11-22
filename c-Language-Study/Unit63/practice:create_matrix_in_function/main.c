#include <stdio.h>
#include <stdlib.h>

void allocMatrix(void ***ptr, int y, int x, int size) //배열 변수의 주소와 자료형의 크기, 가로 크기, 세로 크기 인자를 받는 함수를 선언한다.
{
    *ptr = malloc(sizeof(void *) * y);                //삼중포인터인 이유는 matrix가 short형 이중포인터로 선언되었기에 값을 변화시키려면 주소값으로 함수를 이용해야 한다.
    for (int i = 0; i < y; i++)                       //각 배열에 메모리 크기를 할당해주기 위해 ptr을 역참조하여 matrix에 저장되게 한다.
    {                                                   
        (*ptr)[i] = malloc(sizeof(size) * x);   
    }
}

void freeMatrix(void ***ptr, int x)
{
    for (int i = 0; i < x; i++)
    {
        free((*ptr)[i]);
    }
    free(*ptr);
}

int main()
{
    short **matrix;
    
    allocMatrix(&matrix, 3, 3, sizeof(short));
    
    matrix[0][2] = 10;
    matrix[1][1] = 20;
    printf("%d %d\n", matrix[0][2], matrix[1][1]);
    
    freeMatrix(&matrix, 3);
    
    return 0;
}