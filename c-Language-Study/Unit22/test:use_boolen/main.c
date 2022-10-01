#include <stdio.h>
#include <stdbool.h> //bool자료형을 사용하기 위한 헤더파일
//참과 거짓을 출력하도록 만들어라.
int main()
{
    bool b1 = false;
    bool b2 = true;
    
    if (b1 != true) //b1에 false 값을 할당해 true와 같지 않다는 조건을 성립하게 한다.
    {
        printf("참\n");
    }
    else
    {
        printf("거짓\n");
    }
    
    printf("%s\n", b2 == false ? "참" : "거짓"); //b2에 true를 할당해 b2와 false가 같지 않다고 만들어 거짓을 출력한다.
    
    return 0;
}