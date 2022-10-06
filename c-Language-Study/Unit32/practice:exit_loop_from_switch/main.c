#include <stdio.h>

int main()
{
    int num1 = 1;
    //"1입니다."가 한 번만 출력되도록 한다.
    for (int i = 0; i < 10; i++) //fot문을 실행하면 10번 반복된다.
    {
        switch (num1) //num1 = 1이기떄문에 case 1이 실행된다.
        {
            case 1:
                printf("1입니다.\n"); 
            goto EXIT; //EXIT로 넘어간다.
            default:
                break;
        }
    }
EXIT: //아무런 내용이 없으니 출력하는 것 없이 프로그램을 종료한다.

    return 0;    
}