#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numPtr1 = malloc(sizeof(int));
    short *numPtr2;
    
    *numPtr1 = 0x11223344;
    //0x3344가 출력되도록 해라.
    numPtr2 = (short *)numPtr1; //0x3344는 크기가 2byte인 16진수이니 numPtr1을 short포인터 형으로 변환한다.
                                //포인터의 형변환은 (자료형 *)으로 한다.
    printf("0x%x\n", *numPtr2);
    
    free(numPtr1);
    
    return 0;
}