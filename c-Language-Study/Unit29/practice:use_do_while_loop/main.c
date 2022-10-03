#include <stdio.h>

int main()
{
    char c1;
    //'q'가 입력되면 프로그램을 종료시켜라.
    do
    {
        scanf("%c", &c1);   
    } while (c1 != 'q'); //입력받은 c1이 'q'가 아닌 동안은 계속 do 문을 실행한다.
    
    printf("프로그램 종료\n");
    
    return 0;
}