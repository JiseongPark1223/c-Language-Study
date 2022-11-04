#include <stdio.h>

struct Flags {
    union {      //32936을 이진수로 변환하면 1000 0000 1010 1000이다.
        struct { //따라서 f1의 십진수를 리틀엔디언 방식으로 나열하면 32936이 되기 때문에 비트필드의 비트 수만 맞추어준다.
            unsigned int a : 4; //f1.a는 8이므로 4비트
            unsigned int b : 2; //f1.b는 2이므로 2비트
            unsigned int c : 2; //fl.c는 2이므로 2비트
            unsigned int d : 8; //f1.d는 128이므로 8비트를 지정해주면 알맞은 값이 출력된다.
        };
        unsigned int e;
    };
};
//32936이 출력되게 만들어라
int main()
{
    struct Flags f1 = {0, };
    
    f1.a = 8; 
    f1.b = 2; 
    f1.c = 2; 
    f1.d = 128; 
    
    printf("%u\n", f1.e);
    
    return 0;
}