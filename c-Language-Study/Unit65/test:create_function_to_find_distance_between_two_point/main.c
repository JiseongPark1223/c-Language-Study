#include <stdio.h>
#include <math.h>

struct Point2D { //Point2D구조체를 선언한다.
    int x;
    int y;
};

float getDistance(struct Point2D a, struct Point2D b) //두 구조체의 거리를 구하는 함수를 선언한다.
{
    float result;
    
    result = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
    
    return result; //반환값으로 정수형 결과를 반환한다.
}

int main()
{
    struct Point2D p1;
    struct Point2D p2;
    
    scanf("%d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y); //두 점의 좌표를 입력받는다.
    
    printf("%f\n", getDistance(p1, p2)); //함수로 나온 결과를 출력한다.
    
    return 0;
}