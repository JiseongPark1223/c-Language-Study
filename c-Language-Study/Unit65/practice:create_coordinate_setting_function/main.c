#include <stdio.h>
#include <stdlib.h>

struct Point2D { //Point2D구조체를 선언한다.
    int x;
    int y;
};

void setPoint2D(struct Point2D *p, int x, int y) //구조체 포인터 매개변수와 좌표값이 있는 함수를 선얺나다.
{
    p->x = x;
    p->y = y;
}

int main()
{
    struct Point2D *p1 = malloc(sizeof(struct Point2D)); //구조체 포인터 변수 p1을 선언한 후 메모리를 할당한다.
    
    setPoint2D(p1, 10, 20); //함수에 변수와 좌표를 넣는다.
    
    printf("%d %d\n", p1->x, p1->y);
    
    free(p1); //x좌표와 y좌표를 출력 후 malloc함수로 할당한 메모리를 해제한다.
    
    return 0;
}