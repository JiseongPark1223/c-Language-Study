#include <stdio.h>
#include <stdlib.h>

struct Person { //Person 구조체를 선언해준다.
    char name[20];
    int age;
};
//5명의 인적정보를 입력받아 가장 나이가 많은 사람의 이름을 출력한다.
int main()
{
    struct Person *p[5]; //구조체 포인터 변수 p를 선언한다.
    
    for (int i = 0; i < sizeof(p) / sizeof(struct Person *); i++)
    {
        p[i] = malloc(sizeof(struct Person)); //각 배열에 구조체 크기만큼의 메모리를 할당해준다.
        scanf("%s %d", p[i]->name, &p[i]->age); //이름과 나이를 입력받는다.
    }
    
    int num, max = 0; //나이가 제일 많은 사람의 i값을 저장할 num과 나이 비교를 위해 쓸 max를 선언한다.
    
    for (int i = 0; i < sizeof(p) / sizeof(struct Person *); i++) 
    {                                                               
        if (p[i]->age > max) //기준인 max보다 나이가 많으면 max 값에 나이를 저장하고 i값을 num에 저장한다.
        {
            max = p[i]->age;
            num = i;
        }
    }
    
    printf("%s\n", p[num]->name); //num값에 저장된 이름을 출력한다.
    
    for (int i = 0; i < sizeof(p) / sizeof(struct Person *); i++)
    {
        free(p[i]); //malloc 함수로 할당한 메모리를 해제한다.
    }

    return 0;
}