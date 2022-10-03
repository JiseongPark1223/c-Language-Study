#include <stdio.h>

int main()
{
    char menu;
    //f 환타, c 콜라, p 포카리로 나오게 하고 아무 문자 해당 안될 시 "판매하지 않는 메뉴"로 출력하라.
    scanf("%c", &menu);
    
    switch (menu)
    {
        case 'f': //f 입력시 환타가 출력된다.
            printf("환타\n");
            break;
        case 'c': //c 입력시 콜라가 출력된다.
            printf("콜라\n");
            break;
        case 'p': //p 입력시 포카리스웨트가 출력된다.
            printf("포카리스웨트\n");
            break;
        default: //이외 문자 입력시 판매하지 않는 메뉴가 출력된다.
            printf("판매하지 않는 메뉴\n");
            break;
    }
    
    return 0;
}