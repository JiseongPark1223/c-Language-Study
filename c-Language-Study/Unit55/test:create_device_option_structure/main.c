#include <stdio.h>

struct DeviceOption { //DeviceOption구조체를 선언한다.
    union { //공용체를 이용해 option저장메로리를 공유한다.
        unsigned short option;
        struct {
            unsigned char boot;
            unsigned char interrupt;
        };
    };
};
//0x1122를 출력하라.
int main()
{
    struct DeviceOption opt;
    
    opt.boot = 0x22; //리틀엔디언 방식을 사용하기 때문에 뒤에 출력되는 값 먼저 입력한다.
    opt.interrupt = 0x11;
    
    printf("0x%x\n", opt.option);
    
    return 0;
}