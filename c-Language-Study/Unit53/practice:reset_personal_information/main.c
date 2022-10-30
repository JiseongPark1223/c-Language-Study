#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person { //Person구조체를 선언한다.
    char name[20];
    int age;
    char address[100];
};
//3000명의 인적정보를 0으로 만들어라.
int main()
{
    struct Person *p[3000]; //구조체 포인터 배열 p를 선언한다.
    
    for (int i = 0; i < sizeof(p) / sizeof (struct Person *); i++) //배열 전체의 크기를 요소의 크기로 나누어 요소 개수를 구한다.
    {
        p[i] = malloc(sizeof(struct Person)); //각 요소에 구조체 크기의 메모리를 할당한다.
        memset(p[i], 0, sizeof(struct Person)); //그 뒤 memset 함수를 이용해 멤버변수의 값을 0으로 초기화해준다.
    }
    
    printf("%d\n", p[2000]->age);
    
    for (int i = 0; i < sizeof(p) / sizeof(struct Person); i++) //malloc함수로 할당한 메모리를 해제한다.
    {                                                          
        free(p[i]);
    }
    
    return 0;
}