#include <stdio.h>

int main()
{
    int age;
    
    scanf("%d", &age);
    
    if(age < 18) //18세 미만이면 관람불가를 출력하는 특정조건을 if문으로 걸어둔다.
    {
        printf("청소년 관람 불가");
    }
    
    return 0;
}