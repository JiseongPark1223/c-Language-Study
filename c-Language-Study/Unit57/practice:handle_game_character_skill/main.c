#include <stdio.h>

enum VayneSkill { //VayneSkill 열거형은 선언한 후 Tumble에 1을 저장한다.
    Tumble = 1,
    SilverBolts,
    Condemn,
    FinalHour
};
//구르기가 출력되게 하여라.
int main()
{
    enum VayneSkill skill;
    
    skill = Tumble;
    
    switch(skill) //switch 문을 이용하여 숫자를 입력받으면 알맞은 스킬을 출력하게 한다.
    {
        case 1:
            printf("구르기\n");
            break;
        case 2:
            printf("은화살\n");
            break;
        case 3:
            printf("선고\n");
            break;
        case 4:
            printf("결전의 시간\n");
            break;
        default:
            break;
    }
    
    return 0;
}