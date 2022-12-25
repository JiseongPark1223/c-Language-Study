#include <stdio.h>

struct Point2D {
    float x, y;
};

#define ARRSIZE(arr) (sizeof(arr)/sizeof(arr[0])) //배열의 크기를 구하는 매크로를 선언, 배열 전체 크기 / 배열 요소 하나

int main()                                                       
{
    int numArr1[10];
    long long numArr2[5];
    struct Point2D p[3];
    
    printf("%d\n", ARRSIZE(numArr1));
    printf("%d\n", ARRSIZE(numArr2));
    printf("%d\n", ARRSIZE(p));
    
    return 0;
}