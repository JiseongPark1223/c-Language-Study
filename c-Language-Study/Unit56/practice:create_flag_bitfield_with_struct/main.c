#include <stdio.h>

struct Flags {
    unsigned int a : 2; //0xfffffffff를 2진수로 변환하면 1111이 8번있는 이진수이다.
    unsigned int b : 1; //따라서 3, 1, 63을 출력하려면 그에 맞는 숫자만이 필요하다.
    unsigned int c : 6; //3이 출력되게 하려면 이진수로 11이므로 2, 1은 1, 63은 111111을 만들어준다.
};
//3, 1, 63이 출력되도록 해라.
int main()
{
    struct Flags f1;
    
    f1.a = 0xfffffffff;
    f1.b = 0xfffffffff;
    f1.c = 0xfffffffff;
    
    printf("%u %u %u\n", f1.a, f1.b, f1.c);
    
    return 0;
}