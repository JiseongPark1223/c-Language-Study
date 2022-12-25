#include <stdio.h>

#define RGB(r, g, b) ((unsigned char)(r)) | (unsigned short)((unsigned char)(g) << 8) | (unsigned int)((unsigned char)(b) << 16)
//16진수로 두자리씩 B, G, R 순으로 출력
//두 자리씩 출력이기 때문에 2byte 크기 unsigned char 크기로 r, g, b의 크기를 제한한다.
//B, G, R 순으로 출력해야 하기에 비트 시프트를 하고 한 변수의 메모리를 맞추기 위해 알맞은 형변환을 해준다.
int main()                                                       
{
    int r, g, b;
    scanf("%d %d %d", &r, &g, &b);
    
    printf("#%06x\n", RGB(r, g, b));
    printf("#%06x\n", RGB(1 & 1, 2 & 2, 3 & 3));
    
    return 0;
}