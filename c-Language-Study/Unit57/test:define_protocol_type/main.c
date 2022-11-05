#include <stdio.h>
//6, 5, 4가 출력되게 만드시오.
enum PROTOCOL_TYPE { //PROTOCOL_TCP부터 출력해 PROTOCOL_IP를 마지막에 출력하므로 4를 대입해 4, 5, 6을 저장하게 한다.
    PROTOCOL_IP = 4,
    PROTOCOL_UDP,
    PROTOCOL_TCP
};

int main()
{
    enum PROTOCOL_TYPE p1, p2, p3; //변수 p1, p2, p3를 선언한다.
    
    p1 = PROTOCOL_TCP;
    p2 = PROTOCOL_UDP;
    p3 = PROTOCOL_IP;
    
    printf("%d %d %d\n", p1, p2, p3);
    
    return 0;
}