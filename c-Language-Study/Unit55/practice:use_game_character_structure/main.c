#include <stdio.h>
#include <string.h>

struct Stats { //Stats구조체를 선언하고 멤버변수를 설정해준다.
    float health;
    float healthRegan;
    unsigned int mana;
    float manaRegen;
    float range;
    float attackDamage;
    float armor;
    float attackSpeed;
    float magicResist;
    unsigned int movementSpeed;
};

struct Champion { //Champion구조체를 선언하고 멤버변수를 설정해준다. Stats구조체 또한 멤버변수에 포함시킨다.
    char name[20];
    struct Stats stats;
    float abilityPower;
};

int main()
{
    struct Champion lux; //lux 변수를 선언한다.
    
    strcpy(lux.name, "Lux"); //각 항목에 맞는 값들을 설정한다.
    lux.stats.health = 477.72f;
    lux.stats.healthRegan = 1.08f;
    lux.stats.mana = 334;
    lux.stats.manaRegen = 1.24f;
    lux.stats.range = 550;
    lux.stats.attackDamage = 55.5f;
    lux.stats.attackSpeed = 0.625f;
    lux.stats.armor = 18.72f;
    lux.stats.magicResist = 30;
    lux.stats.movementSpeed = 330;
    lux.abilityPower = 0;
    
    printf("%u %f\n", lux.stats.mana, lux.stats.manaRegen);
    
    return 0;
}