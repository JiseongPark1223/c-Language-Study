#include <stdio.h>
#include <stdlib.h>

union Data { //공용체를 정의해준다.
    short num1;
    int num2;
};
//1, 1을 출력해라
int main()
{
    union Data *d1 = malloc(sizeof(union Data)); //d1 공용체 포인터 변수를 선언한 뒤 공용체 크기의 메모리를 할당해준다.
    
    d1->num2 = 1; //d1->num2에 1을 저장해준다. 공용체는 가장 큰 자료형의 공간을 공유하기 때문에 값을 저장하면 다른 변수를 출력해도 그 값이 나온다.
    
    printf("%d %d\n", d1->num1, d1->num2);
    
    free(d1); //malloc함수로 할당한 메모리를 해제한다.
    
    return 0;
}