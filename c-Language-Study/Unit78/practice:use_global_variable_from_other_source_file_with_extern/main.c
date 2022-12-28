#include <stdio.h>
#include "point3d.h" //Point3D구조체가 선언되어 있는 point3d.h 헤더파일을 포함한다.

extern struct Point3D p1; //다른 소스 파일에 있는 변수 p1을 사용하기 위해 extern을 사용한다.

int main()     
{
    printf("%.1f %.1f %.1f\n", p1.x, p1.y, p1.z);
    
    return 0;
}