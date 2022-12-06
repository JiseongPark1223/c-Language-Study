#include <stdio.h>

struct Person { //인적사항이 저장될 Person구조체를 선언
    char name[30];
    int age;
    void (*print)(struct Person *); 
};

void print(struct Person *p) //포인터 변수를 받아 인적사항을 출력할 함수
{
    printf("%s %d\n", p->name, p->age);
}
 
void executer(void (*fp[])(struct Person *), struct Person p[], int count) 
{
    for (int i = 0; i < count; i++)
    {
        fp[i](&p[i]);
    }
}

void (*getPrintFunc(struct Person *p))(struct Person *)
{
    return p->print;
}

int main()
{
    struct Person p[3];
    p[0].print = print;
    p[1].print = print;
    p[2].print = print;

    scanf("%s %d %s %d %s %d",
        p[0].name,& p[0].age,
        p[1].name,& p[1].age,
        p[2].name,& p[2].age
    );

    void (*fp[3])(struct Person *);

    for (int i = 0; i < sizeof(p) / sizeof(struct Person); i++)
    {
        fp[i] = getPrintFunc(&p[i]);
    }

    executer(fp, p, sizeof(p) / sizeof(struct Person));

    return 0;
}