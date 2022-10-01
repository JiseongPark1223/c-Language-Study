#include <stdio.h>

int main()
{
    int num1, num2;
    //표준입력에 1과 0을 입력한다.
    scanf("%d %d", &num1, &num2);
    
    printf("%s\n", num1 && num2 ? "참" : "거짓"); //둘 다 1이 아니므로 거짓이 출력
    printf("%s\n", num1 || num2 ? "참" : "거짓"); //둘 중 하나가 1이므로 참이 출력
    printf("%s\n", !num1 ? "참" : "거짓"); //1, 즉 참의 반대인 거짓이 출력
    
    return 0;
}