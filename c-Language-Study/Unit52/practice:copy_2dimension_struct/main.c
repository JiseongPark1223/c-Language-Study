#include <stdio.h>
#include <stdlib.h> //malloc 함수를 포함한 헤더파일
#include <string.h> //memcpy함수를 포함한 헤더파일

struct Point2D { //구조체 Point2D를 선언한다.
    int x;
    int y;
};

int main()
{
    struct Point2D p1; //구조체 변수 p1를 선언한다.
    struct Point2D *p2 = malloc(sizeof(struct Point2D)); //구조체 포인터 p2을 선언한다.
    
    p1.x = 10; //p1의 멤버에만 10과 20을 저장한다.
    p1.y = 20;
    
    memcpy(p2, &p1, sizeof(struct Point2D)); //p1의 내용을 p2에 저장한다.
    
    printf("%d %d\n", p2->x, p2->y);
    
    free(p2); //malloc 함수로 할당한 메모리를 해제해준다.
    
    return 0;
}
