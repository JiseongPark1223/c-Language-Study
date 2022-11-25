#include <stdio.h>

struct Point2D { //Point2D구조체를 선언한다.
    int x;
    int y;
};

void printPoint2D(struct Point2D p) //구조체 매개변수가 있는 함수를 선얺나다.
{
    printf("%d %d\n", p.x, p.y);
}

int main()
{
    struct Point2D p1; //구조체 변수 p1을 선언한다.
    
    p1.x = 10;
    p1.y = 20;
    
    printPoint2D(p1); //함수를 통해 저장된 값이 출력되도록 한다.
    
    return 0;
}