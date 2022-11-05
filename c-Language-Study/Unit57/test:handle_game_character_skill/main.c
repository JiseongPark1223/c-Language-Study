#include <stdio.h>
//명상이 출력되게 만드시오
enum MasterYiSkill { //MasterYiSkill열거형을 선언한다.
    AlphaStrike = 1,
    Meditation,
    WujuStyle,
    Highlander
};

int main()
{
    enum MasterYiSkill skill; //skill변수를 선언한다.
    
    skill = Meditation;
    
    switch(skill) //switch문을 이용하여 skill에 Meditation을 넣어 명상이 출력되도록 한다.
    {
        case AlphaStrike:
            printf("일격 필살\n");
            break;
        case Meditation:
            printf("명상\n");
            break;
        case WujuStyle:
            printf("우주류 검술\n");
            break;
        case Highlander:
            printf("최후의 전사\n");
            break;
        default:
            break;
    }
    
    return 0;
}