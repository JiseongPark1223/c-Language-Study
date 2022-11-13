#include <stdio.h>

struct Point2D {
    int x;
    int y;
};
//30과 60이 출력되도록 하여라.
int main() 
{
    struct Point2D p[3] = {{10, 20}, {30, 40}, {50, 60}};
    struct Point2D *ptr;
    
    ptr = p; //배열 p를 구조체 포인터 ptr에 저장한다.
    
    printf("%d %d\n", (ptr + 1)->x, (ptr + 2)->y); //30은 p[1]에 있으므로 1을 더하고 알맞은 멤버변수를 입력한다.
                                                   //60은 p[2]에 있으므로 2를 더하고 알맞은 멤버변수를 입력한다.
    return 0;
}