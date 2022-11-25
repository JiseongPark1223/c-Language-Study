#include <stdio.h>

struct Point2D { //Point2D구조체를 선언한다.
    int x;
    int y;
};

void movePoint2D(struct Point2D *p, int x, int y) //구조체로 입력받은 좌표를 이동하는 함수를 선언한다.
{
    p->x = p->x + x;
    p->y = p->y + y;
}

int main()
{
    struct Point2D p1;
    int offsetX, offsetY;
    
    scanf("%d %d %d %d", &p1.x, &p1.y, &offsetX, &offsetY); //좌표와 이동할 거리를 입력한다.
    
    movePoint2D(&p1, offsetX, offsetY); 
    
    printf("%d %d\n", p1.x, p1.y);
    
    return 0;
}