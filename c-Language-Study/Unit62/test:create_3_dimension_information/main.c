#include <stdio.h>
#include <stdlib.h>

struct Point3D { //Point3D 구조체를 선언한다.
    float x;
    float y;
    float z;
};

struct Point3D *allocPoint3D(float a, float b, float c) //실수형 매개변수 3개를 받는 구조체 포인터 함수를 선언한다.
{
    struct Point3D *p = malloc(sizeof(struct Point3D)); //포인터 변수 p를 선언 후 구조체 크기의 메모리를 할당한다.
    p->x = a; //각 멤버변수에 매개변수로 받은 값을 저장한다.
    p->y = b;
    p->z = c;
    
    return p; //포인터 변수 p의 메모리 주소를 반환한다.
}

int main()
{
    float x, y, z;
    struct Point3D *pos1;
    
    scanf("%f %f %f", &x, &y, &z); //변수 3개를 입력받는다.
    
    pos1 = allocPoint3D(x, y, z); //반환된 메모리 값을 포인터 변수 pos1에 저장한다.
    
    printf("%f %f %f\n", pos1->x, pos1->y, pos1->z); //알맞은 값을 출력한다.
    
    free(pos1); //malloc함수로 선언한 메모리를 해제한다.
    
    return 0;
}