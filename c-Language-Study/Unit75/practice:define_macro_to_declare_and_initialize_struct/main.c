#include <stdio.h>

struct Point3D {
    float x, y;
};

#define INIT_POINT3D(var, x, y, z) struct Point3D var = {x, y, z} //구조체의 값을 받고 정의하는 매크로를 선언
                                                                  //함수 모양으로 매크로 정의
int main()                                                        //#define 매크로 이름(x) 함수(x)
{
    INIT_POINT3D(p1, 1.0f, 2.0f, 3.0f);
    
    printf("%.1f %.1f %.1f\n", p1.x, p1.y, p1.z);
    
    return 0;
}