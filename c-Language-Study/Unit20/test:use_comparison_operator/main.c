#include <stdio.h>

int main()
{
    char c1;
    
    scanf("%c", &c1);
    //삼항연산자를 이용하여 참과 거짓을 출력한다.
    printf("%s\n", c1 != 'k' ? "참" : "거짓"); //c1와 다르면 참 아니면 거짓
    printf("%s\n", c1 > 'h' ? "참" : "거짓"); //h보다 c1이 크면 참 아니면 거짓
    printf("%s\n", c1 <= 'o' ? "참" : "거짓"); //o보다 c1이 작거나 같으면 참 아니면 거짓

    return 0;
}