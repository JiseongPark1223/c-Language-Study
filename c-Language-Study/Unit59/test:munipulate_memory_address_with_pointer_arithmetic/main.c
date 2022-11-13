#include <stdio.h>

int main() 
{
    short *numPtrA;
    short *numPtrB;
    short *numPtrC;
    
    scanf("%p", &numPtrA);
    //순방향으로 6byte, 10byte만큼 떨어진 메모리 주소를 출력해라.
    numPtrB = numPtrA + 3; //numPtrA자료형이 2byte인 short형이므로 3을 더해주면 6byte만큼 떨어진 메모리 주소가 된다.
    numPtrC = numPtrA + 5; //numPtrA자료형이 2byte인 short형이므로 5을 더해주면 10byte만큼 떨어진 메모리 주소가 된다.
    
    printf("%X\n", numPtrB);
    printf("%X\n", numPtrC);
    
    return 0;
}