#include <stdio.h>

#pragma pack (push, 1) //#pragma pack(push, 1)을 사용하여 1byte 단위로 padding 없이 자료형 크기 그대로 메모리에 저장한다.
struct Packet {
    short length;
    int seq;
};
#pragma pack (pop)
// 숫자 6을 출력하도록 해라.
int main()
{
    struct Packet pkt;
    
    printf("%ld\n", sizeof(pkt)); //4byte int형과 2byte short형이 있으므로 6byte가 출력된다.  
                                   
    return 0;
}