#include <stdio.h>

#pragma pack(push, 1) //데이터 손실과 변형을 막기 위해 패딩 없이 1byte단위로 정렬한다.
struct X850Firmware {
    int serial;
    char mode;
    char desc[20];
    int version;
};
#pragma pack(pop) //정렬을 해제한다.

int main()
{
    struct X850Firmware x1; //구조체 변수 x1를 선언한다.
    
    FILE *fp = fopen("x850.bin", "rb");
    
    fread(&x1, sizeof(x1), 1, fp); //x1의 값들을 받아 화면어 바로 출력한다.
    
    printf("%d%c%s%d", x1.serial, x1.mode, x1.desc, x1.version);
    
    fclose(fp); //파일 포인터를 닫는다. 
    
    return 0;
}