#include <stdio.h>

typedef struct { //typedef를 이용하여 alias를 설정한다.
    int x;
    int y;
} Point2D; //alias는 Point2D이다.

int main()
{
    Point2D p1; //alias를 이용해 변수 p1을 선언한다.
    
    p1.x = 10; //변수 p1을 이용해 멤버변수 x와 y에 값을 저장한다.
    p1.y = 20;

    printf("%d %d\n", p1.x, p1.y);
    
    return 0;
}