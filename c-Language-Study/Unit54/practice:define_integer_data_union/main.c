#include <stdio.h>

union Data { //공용체를 정의해준다.
    short num1;
    char c1;
};
//0x5678, 0x78을 출력해라
int main()
{
    union Data d1; //d1 공용체 변수를 선언해준다.
    
    d1.num1 = 0x5678; //num1은 2바이트이기 때문에 16진수 4자리를 저장할 수 있다.(16진수 한자리에 4비트)
    
    printf("0x%x 0x%x\n", d1.num1, d1.c1); //현 cpu는 리틀엔디언 방식을 사용하므로 1바이트 char가 출력하는 값은 뒤에서부터인 0x78을 출력한다.
    
    return 0;
}