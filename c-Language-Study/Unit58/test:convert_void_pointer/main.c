#include <stdio.h>
#include <stdlib.h>

int main()
{
    long double *numPtr1 = malloc(sizeof(long double));
    void *ptr;
    
    scanf("%Lf", numPtr1);
    
    ptr = numPtr1; //ptr은 void형 포인터이므로 numPtr1을 출력하기 위해서 long double 포인터 형으로 변환한다.
    
    printf("%Lf\n", *(long double *)ptr); 
    
    free(numPtr1);
    
    return 0;
}