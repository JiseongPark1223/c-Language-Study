#include <stdio.h>

struct Point3D { //Point3D 구조체를 선언한다.
    float x;
    float y;
    float z;
};

int main()
{
    struct Point3D p1 = { 10.0f, 20.0f, 30.0f };
    struct Point3D *ptr;
    
    ptr = &p1; //p1의 주소를 구조체 포인터 ptr에 저장하므로 멤버변수에 저장되있는 값을 받는다.
    
    printf("%f %f %f\n", ptr->x, ptr->y, ptr->z);
    
    return 0;
}