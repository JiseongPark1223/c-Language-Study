#include <stdio.h>
#include <stdlib.h>

struct Point2D { //구조체 Point2D를 선언해준다.
    int x;
    int y;
};

struct Point2D *allocPoint2D() //메모리 주소값을 반환해주는 구조체 포인터 함수 allocPoint2D를 선언한다.
{
    struct Point2D *p = malloc(sizeof(struct Point2D)); //구조체 포인터 변수 p에 알맞은 메모리를 할당한다.
    
    p->x = 90; //멤버변수에 알맞은 값을 저장한다.
    p->y = 75;
    
    return p; //p의 메모리 주소를 반환한다.
}

int main()
{
    struct Point2D *pos1;
    
    pos1 = allocPoint2D(); //pos1에 메모리 주소값을 저장한다.
    
    printf("%d %d\n", pos1->x, pos1->y); //알맞은 값을 출력한다.
    
    free(pos1); //출력후 malloc함수로 할당한 메모리를 해제한다.
    
    return 0;
}