#include <stdio.h>

int main()
{
    int numArr[5] = {11, 22, 33, 44 ,55};
    int *numPtrA;
    void *ptr;
    //55와 22를 순서대로 출력하라.
    numPtrA = &numArr[2]; //numPtrA에 numArr[2]의 주소값을 저장한다.
    ptr = numArr; //ptr에 numArr의 시작 주소값을 저장한다.
    
    printf("%d\n", *(numPtrA + 2)); //numPtrA은 이미 numArr[2]의 주소값이 저장되어 있으므로 포인터 연산으로 2를 더해 numArr[4]가 출력되도록 한다.
    printf("%d\n", *((int *)ptr + 1)); //ptr에는 numArr의 시작 주소값이 있으므로 1을 더해 numArr[1]을 출력한다.
    
    return 0;
}