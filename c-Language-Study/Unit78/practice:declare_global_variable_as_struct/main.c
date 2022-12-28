#include <stdio.h>

struct Point2D { //2차원 좌표 Point2D구조체를 선언한다.
    int x;
    int y;
};

struct Point2D p1 = {10, 20}; //전역변수로 구조체 값을 선언한다.

void printPoint2D() //좌표를 출력하는 printPoint2D함수를 선언한다.
{
    printf("%d %d\n", p1.x, p1.y);
}

int main()
{
    printf("%d %d\n", p1.x, p1.y); //main함수에서 전역변수 값을 출력한다.
    
    p1.x = 30; //전역변수 값을 수정한다.
    p1.y = 40;
    printPoint2D(); //printPoint2D함수에서 전역변수 값을 출력한다.
    
    return 0;
}