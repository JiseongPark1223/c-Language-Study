#include <stdio.h>

struct Point2D { //구조체 Point2D를 정의하고 멤버를 설정해준다.
    int x;
    int y;
}

int main()
{
    struct Point2D p1; //구조체 변수 p1을 선언한다.
    
    p1.x = 10; //변수 p1을 이용해 멤버변수 x와 y에 값을 저장한다.
    p1.y = 20;

    printf("%d %d\n", p1.x, p1.y);
    
    return 0;
}