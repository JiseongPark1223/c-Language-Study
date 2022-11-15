#include <stdio.h>
#include <stdbool.h>

float getArmor() //실수를 반환하는 getArmor함수를 선언한다.
{
    return 20.500000;
}

bool hasSlowSkill() //bool형 변수를 반환하는 hasSlowSkill함수를 선언한다.
{
    return false;
}

int main()
{
    float armor;
    bool slow;
    
    armor = getArmor(); //armor 변수에 getArmor함수의 리턴값을 저장한다.
    slow = hasSlowSkill(); //slow변수에 hasSlowSkill함수의 리턴값을 저장한다.
    
    printf("%f\n", armor); //armor에 저장된 값을 출력한다.
    printf("%s\n", slow == true ? "true" : "false"); //slow변수가 true이면 true를 아니면 false를 출력한다. (삼항연산자)
    
    return 0;
}