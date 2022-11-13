#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Point3D {
    float x;
    float y;
    float z;
};

int main() 
{
    void *ptr = malloc(sizeof(struct Point3D) * 3);
    struct Point3D p[3];
    float result1, result2;
    
    scanf("%f %f %f %f %f %f %f %f %f",
        &p[0].x, &p[0].y, &p[0].z,
        &p[1].x, &p[1].y, &p[1].z,
        &p[2].x, &p[2].y, &p[2].z
    );
    //구조체 배열에서 두번째 요소의 x멤버와 세번째 요소의 z멤버를 출력하라.    
    memcpy(ptr, p, sizeof(struct Point3D) * 3); //void형 포인터 ptr에 구조체 배열 p를 복사한다.
    memset(p, 0, sizeof(struct Point3D) * 3); //그 후 구조체 배열 p를 0으로 초기화한다.
    
    result1 = ((struct Point3D *)ptr + 1)->x; //result1은 두번째 요소 x멤버이므로 1을 더한 후 화살표 연산자를 사용하여 x멤버를 출력한다.
    result2 = ((struct Point3D *)ptr + 2)->z; //result2은 세번째 요소 z멤버이므로 2을 더한 후 화살표 연산자를 사용하여 z멤버를 출력한다.
    
    printf("%.1f %.1f", result1, result2);
    
    return 0;
}