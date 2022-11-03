#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Stats {
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

struct Champion {
    char name[20];
    struct Stats *stats;
    float abilityPower;
};

int main()
{
    struct Champion *swain = malloc(sizeof(struct Champion)); //swain 포인터변수를 선언한다.
    swain->stats = malloc(sizeof(struct Stats)); //stats포인터 변수에 Stats구조체 크기의 메모리를 할당해준다.
    
    strcpy(swain->name, "Swain"); //각 멤버변수에 알맞은 값들을 설정한다.
    swain->stats->health = 463.0f;
    swain->stats->healthRegan = 1.48f;
    swain->stats->mana = 290;
    swain->stats->manaRegan = 1.49f;
    swain->stats->range = 500;
    swain->stats->attackDamage = 52.0f;
    swain->stats->attackSpeed = 0.625f;
    swain->stats->armor = 20.0f;
    swain->stats->magicResist = 30;
    swain->stats->movementSpeed = 335;
    swain->abilityPower = 0;
    
    printf("%s %f\n", swain->name, swain->stats->health);
    
    free(swain->stats); //구조체 멤버 메모리를 먼저 해제후 구조체 메모리를 해제한다.
    free(swain);
    
    return 0;
}