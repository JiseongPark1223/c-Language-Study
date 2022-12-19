#include <stdio.h>

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
    
    FILE *fp = fopen("rect.bin", "wb"); //rect.bin파일을 쓰기 모드로 연다.
    
    fread(&rf, sizeof(rf), 1, fp); //파일의 내용을 읽어 구조체 변수 rf에 저장한다.
    
    printf("%d %d %f %f %f %f %s\n",
        rf.magic, rf.version, rf.p1.x, rf.p1.y, rf.p2.x, rf.p2.y, rf.desc);
    
    fclose(fp); //파일 포인터를 닫는다. 
    
    return 0;
}