#include <stdio.h>

int main()
{
    float num1 = 1.8f; //float의 자료형의 크기, 4byte
    double num2 = 2.9; //double의 자료형의 크기, 8byte
    long double num3 = 3.7l; //long double의 자료형의 크기, 8byte
    
    printf("%f %f %Lf\n", num1, num2, num3);
    printf("%d %d\n", sizeof(num1), sizeof(num2));
    
    return 0;
}