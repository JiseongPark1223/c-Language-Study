#include <stdio.h>
#include <math.h>

struct Point2D { //Point2D 구조체를 선언해준다.
    int x;
    int y;
};
//좌표 4개의 길이를 구하여라.
int main()
{
    struct Point2D p[4]; //구조체 변수 p를 선언한다.
    double length = 0.0f;
    
    scanf("%d %d %d %d %d %d %d %d",
        &p[0].x, &p[0].y, &p[1].x, &p[1].y, &p[2].x, &p[2].y, &p[3].x, &p[3].y); //각 좌표의 값을 입력받는다.
        
    for (int i = 0; i < sizeof(p) / sizeof(struct Point2D) - 1; i++) //배열의 크기에서 요소의 크기로 나눠 요소의 개수를 구하고
    {                                                                //그 뒤 1을 빼 2개의 요소간의 거리를 계산할수 있도록 한다.
       double a = sqrt(pow(fabs(p[i].x - p[i + 1].x), 2) + pow(fabs(p[i].y - p[i + 1].y), 2));
       length += a; //길이에 두점 사이의 거리를 구한다.
    }
    
    printf("%f\n", length);
    
    return 0;
}