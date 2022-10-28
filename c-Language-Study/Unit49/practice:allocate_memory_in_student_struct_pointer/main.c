#include <stdio.h>
#include <stdlib.h> //malloc함수가 있는 헤더파일
#include <string.h> //strcpy함수가 있는 헤더파일

struct student { //student구조체를 선언한다.
    char name[20];
    int grade;
    int class;
    float average;
};

int main()
{
    struct student *s1 = malloc(sizeof(struct student)); //구조체 변수를 선언하는 것이 아닌 구조체 포인터에 메모리를 할당하여 사용한다. 
    
    strcpy(s1->name, "고길동"); //s1.name형식이 아닌 화살표 연산자로 구조체 멤버에 접근하여 값을 저장한다.
    s1->grade = 1;
    s1->class = 3;
    s1->average = 65.38999f;
    
    printf("이름: %s\n", s1->name);
    printf("학년: %d\n", s1->grade);
    printf("반: %d\n", s1->class);
    printf("평균점수: %f\n", s1->average);
    
    free(s1); //할당된 메모리를 해제한다.
    
    return 0;
}