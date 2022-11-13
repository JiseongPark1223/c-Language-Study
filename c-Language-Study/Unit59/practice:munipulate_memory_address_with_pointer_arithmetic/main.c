#include <stdio.h>

int main()
{
    int *numPtrA = NULL; //0x08과 0x14가 출력되도록 해라.
    
    printf("%p\n", numPtrA + 2); //numPtrA가 NULL이므로 메모리 주소는 0이다.
    printf("%p\n", numPtrA + 5); //따라서 8을 출력하려면 numPtrA의 자료형인 int 4byte의 2배 이므로 2를 더하고 14는 5배를 하면 되므로 5를 더한다.
    
    return 0;
}