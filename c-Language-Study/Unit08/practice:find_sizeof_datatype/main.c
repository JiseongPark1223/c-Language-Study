#include <stdio.h>

int main()
{
    double num1 = 0.4284; //double sizeof = 8byte
    float num2 = 2.7f; //float sizeof = 4byte

    printf("num1의 크기 : %d, num2의 크기: %d\n", sizeof(num1), sizeof(num2));

    return 0;
}