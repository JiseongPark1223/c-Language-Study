#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long *numPtr1 = malloc(sizeof(unsigned long long));
    unsigned int *numPtr2;
    //입력되는 8바이트 크기의 16진수 정수를 4바이트만 출력되게 만들어라.
    scanf("%llx", numPtr1);
    
    numPtr2 = (unsigned int *)numPtr1; //numPtr1은 8바이트 크기의 16진수를 입력받았으므로 4바이트인 unsigned int형으로 형변환 한다.
    
    printf("0x%x\n", *numPtr2); //리틀엔디언 방식을 사용하므로 0x87654321이 출력된다.
    
    free(numPtr1);
    
    return 0;
}