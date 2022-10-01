#include <stdio.h>
#include <stdbool.h> //bool자료형을 사용하기 위한 헤더파일

int main()
{
    bool b1 = true;
    bool b2 = false;
    
    if (b1 && b1) //참이 출력되어야 하므로 두 값 모두 참이 되어야 한다.
    {
        printf("참\n");
    }
    else
    {
        printf("거짓\n");
    }
    
    printf("%s\n", b2 || b2 ? "참" : "거짓"); //거짓이 출력되어야 하므로 하나라도 참의 값이 되면 안된다.
    
    return 0;
}