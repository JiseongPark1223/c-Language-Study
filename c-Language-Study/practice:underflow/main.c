#include <stdio.h>
#include <float.h> 

int main()
{
    float num1 = FLT_MIN;
    
    num1 = num1 / 100000000.0f; //정수자료형의 최솟값에 100000000.0f를 나누면 미세한 수가 되면서 underflow가 발생해 0.000000e+00으로 변함.
    
    printf("%e\n", num1);
    
    return 0;
}