#include <stdio.h>
#include <string.h>

struct Stats { //Stats구조체를 선언한다.
    float health;
    float healthRegan;
    unsigned int mana;
    float manaRegan;
    float range;
    float attackDamage;
    float armor;
    float attackSpeed;
    float magicResist;
    unsigned int movementSpeed;
};

struct Champion { //Champion구조체를 선언하고 멤버변수로 Stats구조체를 설정한다.
    char name[20];
    struct Stats stats;
    float abilityPower;
};

int main()
{
    struct Champion swain; //swain변수를 선언한다.
    
    strcpy(swain.name, "Swain"); //각 멤버변수에 알맞은 값들을 설정한다.
    swain.stats.health = 463.0f;
    swain.stats.healthRegan = 1.48f;
    swain.stats.mana = 290;
    swain.stats.manaRegan = 1.49f;
    swain.stats.range = 500;
    swain.stats.attackDamage = 52.0f;
    swain.stats.attackSpeed = 0.625f;
    swain.stats.armor = 20.0f;
    swain.stats.magicResist = 30;
    swain.stats.movementSpeed = 335;
    swain.abilityPower = 0;
    
    printf("%s %f\n", swain.name, swain.stats.health);
    
    return 0;
}