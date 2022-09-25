#include <stdio.h>
#include <float.h> //실수형 자료형의 양수 최댓값, 최솟값이 들어 있는 헤더파일

int main()
{
    double doubleMin, doubleMax;
    long double longDoubleMin, longDoubleMax;
    
    doubleMin = DBL_MIN; //double의 최솟값
    doubleMax = DBL_MAX; //double의 최댓값 
    longDoubleMin = LDBL_MIN; //long double의 최솟값
    longDoubleMax = LDBL_MAX; //long double의 최댓값
    
    printf("%e %e\n", doubleMin, doubleMax); //double의 크기 8byte
    printf("%Le %Le\n", longDoubleMin, longDoubleMax); //64bit 리눅스에서는 16byte 크기
    
    return 0;
}