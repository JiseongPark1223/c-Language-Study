#include <stdio.h>

#pragma pack(push, 1) //#pragma pack(push,1)을 이용해 padding 없이 멤버변수 크기 
struct Packekt {      //그대로 메모리를 할당한다.
    char flags;
    short a;
};
#pragma pack(pop)
//3이 출력되도록 해라.
int main()
{
    struct Packekt pkt;
    
    printf("%ld\n", sizeof(pkt)); //따라서 1byte char와 2byte short 형을 합친 크기인 3byte가 출력된다.
    
    return 0;
}