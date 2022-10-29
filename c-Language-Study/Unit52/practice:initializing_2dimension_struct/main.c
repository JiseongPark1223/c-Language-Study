#include <stdio.h>
#include <stdlib.h> //malloc 함수를 포함한 헤더파일
#include <string.h> //memset 함수를 포함한 헤더파일

struct Point2D { //구조체 Point2D를 선언한다.
    int x;
    int y;
};

int main()
{
    struct Point2D p; //구조체 변수 p를 선언한다.
    struct Point2D *ptr = malloc(sizeof(struct Point2D)); //구조체 포인터 ptr을 선언한다.
    
    memset(&p, 0, sizeof(struct Point2D)); //주소연산자를 사용해 변수의 메모리 주소를 넣고 원하는 값과 구조체의 크기를 넣어준다.
    memset(ptr, 0, sizeof(struct Point2D)); //포인터이기에 그대로 ptr을 넣고 원하는 값과 구조체의 크기를 넣어준다.
    
    printf("%d %d %d %d\n", p.x, p.y, ptr->x, ptr->y);
    
    free(ptr); //malloc 함수로 할당한 메모리를 해제해준다.
    
    return 0;
}