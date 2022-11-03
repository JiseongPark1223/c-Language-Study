#include <stdio.h>

struct DeviceOption { //DeviceOption구조체를 선언한다.
    union {
        unsigned long long option; //공용체에 option 변수를 선언하고 구조체를 선언하면 저장공간을 공유하기 때문에 8바이트 
        struct {                   //저장공간을 만든다.
            unsigned char boot[4]; //리틀엔디언 방식을 사용하기 때문에 거꾸로 출력되므로 boot배열 먼저 저장후 다른 배열을 저장한다.
            unsigned char interrupt[2];
            unsigned char bus[2];
        };
    };
};
//0x1107060504030201이 출력되게 하라.
int main()
{
    struct DeviceOption opt;
    
    opt.boot[0] = 0x01;
    opt.boot[1] = 0x02;
    opt.boot[2] = 0x03;
    opt.boot[3] = 0x04;
    opt.interrupt[0] = 0x05;
    opt.interrupt[1] = 0x06;
    opt.bus[0] = 0x07;
    opt.bus[1] = 0x11;
    
    printf("0x%llx\n", opt.option);
    
    return 0;
}