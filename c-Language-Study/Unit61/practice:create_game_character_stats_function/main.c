#include <stdio.h>
#include <stdbool.h>

int getMana() //반환값이 int형인 getMana를 정의한다.
{
    return 222;
}

float getAttackSpeed() //반환값이 float형인 getAttackSpeed를 정의한다.
{
    return 0.679000;
}

bool isMelee() //반환값이 bool형인 isMelee를 정의한다.
{
    return true;
}

int main()
{
    int mana;
    float attackSpeed;
    bool melee;
    
    mana = getMana(); //각 변수에 반환값을 저장 후 출력한다.
    attackSpeed = getAttackSpeed();
    melee = isMelee();
    
    printf("%d\n", mana);
    printf("%f\n", attackSpeed);
    printf("%d\n", melee);
    
    return 0;
}