#include <stdio.h>
#include <stdlib.h>

struct Point2D {
    int x;
    int y;
};

struct Point2D *p1; //구조체 포인터 전역변수 p1을 선언한다. 

void printPoint2D()
{
    printf("%d %d\n", p1->x, p1->y);
}

int main()
{
    p1 = malloc(sizeof(struct Point2D)); //p1에 메모리를 할당한다.
    p1->x = 10;
    p1->y = 20;
    
    printPoint2D();
    
    free(p1);
    
    return 0;
}