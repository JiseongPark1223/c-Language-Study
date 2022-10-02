#include <stdio.h>

int main()
{
    unsigned char num1 = 1; //0000 0001
    unsigned char num2 = 5; //0000 0101
    
    printf("%u\n", num1 | num2); //or연산자는 0과 1의 값이 있으면 1로 출력된다. 따라서 0000 0101(5)가 출력
    printf("%u\n", num1 ^ num2); //xor연산자는 두 값이 1이 있으면 0으로 바뀌어 출력된다. 따라서 0000 0100(4)가 출력
    printf("%u\n", num1 & num2); //and연산자는 두 값이 1이여야 1로 출력된다. 따라서 0000 0001(1)가 출력
    
    num1 = ~num2; //not연산자는 0은 1로 1은 0으로 출력된다. 따라서 1111 1010(250)가 출력
    printf("%u\n", num1);
    
    return 0;
}