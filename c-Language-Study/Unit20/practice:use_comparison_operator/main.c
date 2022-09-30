#include <stdio.h>

int main()
{
    int num1 = 27;
    //참이면 1 거짓이면 0이 출력된다.    
    printf("%d\n", num1 > 10); //27 > 10
    printf("%d\n", num1 != 5); //27 != 5, != 다르다는 기호이다.
    printf("%d\n", num1 >= 27);
    printf("%d\n", num1 == 27); //27 == 27, == 양쪽의 값이 같다는 기호이다.
    
    printf("%d\n", num1 < 30);
    printf("%d\n", num1 <= 27);
    
    return 0;
}