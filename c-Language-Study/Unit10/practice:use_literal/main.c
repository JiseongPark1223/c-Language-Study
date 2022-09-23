#include <stdio.h>

int main()
{
    printf("H%cllo, %s %d %Le\n", 'e', "world!", 8, 4.9e-302L); //literal은 값 그 자체를 뜻함.
                                                                //e 문자리터럴, world!  문자열리터럴, 8 정수리터럴, 4.9e-302 실수리터럴
    return 0;
}
