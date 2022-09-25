#include <stdio.h>
#include <float.h> //정수 자료형의 최댓값과 최솟값을 포함하는 헤더파일

int main()
{
    float num1 = FLT_MAX; //float 자료형의 최댓값
    double num2 = DBL_MIN; //double 자료형의 최솟값
    long double num3 = LDBL_MAX; //long double 자료형의 최댓값

    printf("%.2f\n", num1);
    printf("%e\n", num2); //값의 크기가 너무 크기 때문에 부동소수점으로 출력하지 않으면 0으로 출력됨.
    printf("%Le\n", num3); //따라서 float와 double %e, long double은 %Le로 출력함.
    
    return 0;    
}