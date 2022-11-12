#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stats {
    float health;
    float healthRegen;
    unsigned int mana;
    float manaRegan;
    float range;
    float attackDamage;
    float armor;
    float attackSpeed;
    float magicResist;
    unsigned int movementSpeed;
};

int main()
{
    void *ptr = malloc(sizeof(struct Stats));
    struct Stats st;
    
    scanf("%u %u", &st.mana, &st.movementSpeed);
    
    memcpy(ptr, &st, sizeof(struct Stats)); //구조체 변수 st를 구조체 Stats크기의 메모리를 가진 포인터 ptr에 복사한다.
    st.mana = 0;
    st.movementSpeed = 0; //그 후 구조체 변수 st의 내용을 초기화시킨다.
    
    printf("%d\n", ((struct Stats *)ptr)->mana); //void 포인터 ptr을 구초제 Stats크기의 포인터로 형변환 후 멤버변수에 접근해 값을 출력한다.
    printf("%d\n", ((struct Stats *)ptr)->movementSpeed);
    free(ptr);
    
    return 0;
}