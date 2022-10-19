#include <stdio.h>

int main()
{
    int number; //숫자를 입력받을 변수를 선언한다. //1부터 7사이의 숫자
    char name[31], result[40]; //문자열과 숫자와 문자열을 합친 것을 담을 문자열을 선언한다.
    
    scanf("%d %s", &number, name); //숫자와 문자열을 입력받는다.
    
    switch(number) //number에 숫자를 받아온다.
    {
        case 1: //1이 입력될경우
            sprintf(result, "%dst %s", number, name); //뒤에 st를 붙인다.
            break;
        case 2: //2가 입력될 경우
            sprintf(result, "%dnd %s", number, name); //뒤에 nd를 붙인다.
            break;
        case 3: //3이 입력될 경우
            sprintf(result, "%drd %s", number, name); //뒤에 rd를 붙인다.
            break;
        default: //나머지의 경우 
            sprintf(result, "%dth %s", number, name); //뒤에 th를 붙인다.
            break;
    }
    
    printf("%s\n", result); //sprintf를 이용해 만든 자료형의 결과를 출력한다.
    return 0;
}