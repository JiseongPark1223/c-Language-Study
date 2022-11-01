#include <stdio.h>
#include <stdlib.h>

union Data { //공용체를 정의해준다.
    short num1;
    int num2;
};
//0x1111, 0x11111111를 출력해라
int main()
{
    union Data *d1 = malloc(sizeof(union Data)); // 공용체 포인터 d1을 선언한다.
    
    d1->num2 = 0x11111111; //num1보다 크기가 큰 num2에 값을 저장한다.
    
    printf("0x%x 0x%x\n", d1->num1, d1->num2); 
    
    free(d1); //malloc함수로 할당한 메모리를 해제한다.
    
    return 0;
}