#include <stdio.h>

typedef struct { //typedef선언을 이용해 alias를 지정하고 struct의 이름을 지정하지 않는다.
    int x;
    int y;
} Point2D;

int main()
{
    Point2D p1; //별칭을 이용하여 변수를 선언하고 값을 저장한다.
    
    p1.x = 10;
    p1.y = 20;
    
    printf("%d %d\n", p1.x, p1.y);
    
    return 0;
}