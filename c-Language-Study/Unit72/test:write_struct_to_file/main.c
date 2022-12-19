#include <stdio.h>
#include <string.h>

#pragma pack(push, 1) //데이터 손실과 변형을 막기 위해 패딩 없이 1byte단위로 정렬한다.
struct X820Firmware {
    int serial;
    char desc[13];
    short tag;
    char mode;
};
#pragma pack(pop) //정렬을 해제한다.

int main()
{
    struct X820Firmware x1; //구조체 변수 x1를 선언한다.
    memset(&x1, 0, sizeof(x1));
    
    FILE *fp = stdout;
    
    x1.serial = 1800891002;
    strcpy(x1.desc, "X820 Firmware");
    x1.tag = 8512;
    x1.mode = '-';
    
    fwrite(&x1, sizeof(x1), 1, fp); //x1의 값들을 받아 화면어 바로 출력한다.
    
    fclose(fp); //파일 포인터를 닫는다. 
    
    return 0;
}