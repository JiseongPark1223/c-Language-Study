#include <stdio.h>
#include <stdlib.h> //malloc 함수와 free 함수가 선언된 헤더파일
#include <limits.h> //정수형 변수의 최댓값과 최솟값이 저장되어 있는 헤더파일

int main()
{
    int *numPtr1 = malloc(sizeof(int)); //numPtr1이라는 포인터 변수에 int 크기의 메모리 공간을 할당한다.
    long long *numPtr2 = malloc(sizeof(long long)); //numPtr2라는 포인터 변수에 long long 크기의 메모리 공간을 할당한다.
    
    *numPtr1 = INT_MAX; //numPtr1을 역참조하여 값을 설정한다.
    *numPtr2 = LLONG_MAX; //numPtr2를 역참조하여 값을 설정한다.
    
    printf("%d %lld\n", *numPtr1, *numPtr2); 
    
    free(numPtr1); //동적으로 할당된 numPtr1의 메모리 공간을 해제한다.
    free(numPtr2); //동적으로 할당된 numPtr2의 메모리 공간을 해제한다.
    
    return 0;
}