#include <stdio.h>
#include <stdlib.h>

union Data { //공용체를 정의해준다.
    char c1;
    int num1;
};
//0x11, 4를 출력해라
int main()
{
    union Data d1; //공용체 변수 d1을 선언한다.
    
    d1.num1 = 0x1111; 
    
    printf("0x%x %d\n", d1.c1, sizeof(d1)); //두자리 수를 출력하려면 1바이트인 자료형을 선언해야하고 공용체 크기를 4바이트이게
                                            //하려면 int를 선언해준다.
    return 0;
}
