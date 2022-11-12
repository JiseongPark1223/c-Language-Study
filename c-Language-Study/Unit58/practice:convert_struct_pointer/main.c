#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
};

int main()
{
    struct Person *p1 = malloc(sizeof(struct Person)); //malloc함수를 이용해 구조체 크기의 메모리를 선언한다.
    void *ptr;
    
    strcpy(p1->name, "고길동");
    p1->age = 40;
    
    ptr = p1;
    
    printf("%s %d\n", ((struct Person *)ptr)->name, ((struct Person *)ptr)->age); //구조체 포인터로 접근하여 멤버변수에 접근한다.
    
    free(p1); //malloc함수로 할당한 메모리를 해제한다.
    
    return 0;
}