#include <stdio.h>
#include <string.h>

#pragma pack(push, 1) //데이터 손실과 변형을 막기 위해 패딩 없이 1byte단위로 정렬한다.
struct Point2D {
    float x;
    float y;
};

struct RectangleFileFormat {
    short magic;
    int version;
    struct Point2D p1;
    struct Point2D p2;
    char desc[30];
};
#pragma pack(pop) //정렬을 해제한다.

int main()
{
    struct RectangleFileFormat rf; //구조체 변수 rf를 선언한다.
    memset(&rf, 0, sizeof(rf)); //rf에 있는 값들을 초기화한다.
    
    rf.magic = 're';
    rf.version = 1;
    rf.p1.x = 4.5f;
    rf.p1.y = 2.1f;
    rf.p2.x = 9.2f;
    rf.p2.y = 8.7f;
    strcpy(rf.desc, "Rectangle File Format");
    
    FILE *fp = fopen("rect.bin", "wb"); //rect.bin파일을 쓰기 모드로 연다.
    
    fwrite(&rf, sizeof(rf), 1, fp); //rf에 저장된 내용을 파일로 옮긴다.
    
    fclose(fp); //파일 포인터를 닫는다. 
    
    return 0;
}