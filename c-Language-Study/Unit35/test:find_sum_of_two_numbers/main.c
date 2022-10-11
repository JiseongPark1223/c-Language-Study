#include <stdio.h>
#include <stdlib.h> //malloc 함수와 free 함수가 선언된 헤더파일

int main()
{
    int num1, num2;
    
    int *numPtr1 = malloc(sizeof(int)); //malloc 함수로 int 크기(4byte)만큼의 메모리 크기를 할당한다.
    int *numPtr2 = malloc(sizeof(int));
    
    scanf("%d %d", &num1, &num2);
    
    *numPtr1 = num1; //역참조를 이용하여 num1의 값을 저장한다.
    *numPtr2 = num2;
    
    printf("%d\n", num1 + num2);
    
    free(numPtr1); //free함수를 이용해 malloc함수로 메모리 크기를 동적할당 한것을 해제한다.
    free(numPtr2);
    
    return 0;
}