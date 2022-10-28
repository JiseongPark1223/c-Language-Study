#include <stdio.h>
#include <math.h> //sqrt함수가 있는 헤더파일
#include <stdlib.h> //abs함수가 있는 헤더파일

struct Point2D { // Point2D 구조체를 선언한다.
    int x;
    int y;
};

int main()
{
    struct Point2D p1, p2; 
    double distance;
    
    scanf("%d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y); //정수 4개를 입력받아 좌표에 저장한다.
    
    int a = abs(p1.x - p2.x); //가로와 세로의 길이의 차를 구한 뒤 절댓값을 해 양수로 만들어준다.
    int b = abs(p1.y - p2.y);
    
    distance = sqrt((a*a) + (b*b)); //피타고라스의 정리를 이용해 두 점 사이의 거리를 구한다.
    
    printf("%f\n", distance);
    
    return 0;
}