#include <stdio.h>

void setAttackSpeed(float a) //반환값 없이 float형 매개변수만 지정한 함수를 선언한다.
{
    printf("Attack Speed: %f\n", a);
}

int main()
{
    setAttackSpeed(0.638f); //인자를 입력받아 알맞은 값을 출력한다.
    setAttackSpeed(1.23f);
    
    return 0;
}
