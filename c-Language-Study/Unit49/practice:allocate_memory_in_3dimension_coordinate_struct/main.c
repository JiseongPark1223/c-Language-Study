#include <stdio.h>
#include <stdlib.h>

typedef struct _Point3D { //alias가 Point3D인 구조체를 선언한다.
    float x;
    float y;
    float z;
} Point3D;

int main()
{
    Point3D *p1 = malloc(sizeof(Point3D)); //구조체 포인터 p1을 선언하고 별칭의 크기와 구조체의 크기가 같으므로 별칭으로 크기를 구한다.
    
    p1->x = 10.0f; //값을 저장한 뒤 출력한다.
    p1->y = 20.0f;
    p1->z = 30.0f;
    
    printf("%f %f %f\n", p1->x, p1->y, p1->z);
    
    free(p1);
    
    return 0;
}