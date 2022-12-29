#include <stdio.h>

struct Point2D {
    int x, y;
};


struct Point2D movePoint(int num) //구조체 함수를 선언하여 멤버변수를 받는다.
{
    static struct Point2D p = {10, 20}; //정적 변수를 선언해 2차원 좌표를 이동해도 저장되게 한다.
    p.x = p.x + num;
    p.y = p.y + num;
    
    return p;
}

int main()
{
    int num1;
    struct Point2D p;
    
    scanf("%d", &num1);
    
    p = movePoint(num1);
    printf("%d %d\n", p.x, p.y);
    
    p = movePoint(num1);
    printf("%d %d\n", p.x, p.y);
    
    p = movePoint(num1);
    printf("%d %d\n", p.x, p.y);
    
    return 0;
}