#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int numArr1[3] = {0, };
    long long numArr2[3] = {0, };
    int *numPtr = malloc(sizeof(int) * 3);
    void *ptr = malloc(sizeof(long long) * 3);
    int num1;
    long long num2;
    
    scanf("%d %d %d %lld %lld %lld", &numArr1[0], &numArr1[1], &numArr1[2], &numArr2[0], &numArr2[1], &numArr2[2]);
    //입력 받은 6개의 정수중 3번째와 5번째 정수를 출력하여라.
    memcpy(numPtr, numArr1, sizeof(int) * 3);
    memcpy(ptr , numArr2, sizeof(long long) * 3); //배열의 값들을 각각 numPtr 포인터와 ptr 포인터에 복사한다.
    
    numArr1[0] = numArr1[1] = numArr1[2] = 0;
    numArr2[0] = numArr2[1] = numArr2[2] = 0; //그 후 numArr1과 numArr2의 배열을 초기화한다.
    
    num1 = *(numPtr + 2); //3번째 배열을 출력하려면 numPtr에서 2를 더한 뒤 역참조하여 값을 출력한다.
    num2 = *((long long *)ptr + 1); //ptr은 void형 포인터이므로 (long long *)을 한 뒤 1을 더하고 역참조하여 값을 출력한다.
    
    printf("%d %lld\n", num1, num2);
    
    free(ptr);
    free(numPtr);
    
    return 0;
}