#include <stdio.h>

struct Point2D { //Point2D구조체를 선언한다.
    int x;
    int y;
};

int main()
{
    struct Point2D p[3]; //크기가 3인 구조체 배열을 선언한다.
    
    p[0].x = 10; //각 멤버변수에 알맞은 값을 할당한다.
    p[0].y = 20;
    p[1].x = 30;
    p[1].y = 40;
    p[2].x = 50;
    p[2].y = 60;
    
    for (int i = 0; i < sizeof(p)/sizeof(struct Point2D); i++) //sizeof(p)는 struct Point2D구조체가 3개 있는 것이기 때문에 Point2D구조체로
    {                                                          //나누어주면 배열의 요소의 개수가 나온다.
        printf("%d %d\n", p[i].x, p[i].y); 
    }
    
    return 0;
}