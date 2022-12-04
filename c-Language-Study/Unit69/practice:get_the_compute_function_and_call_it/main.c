#include <stdio.h>

int add(int a, int b) //덧셈 함수를 선언한다.
{
    return a + b;
}

int sub(int a, int b) //뺄셈 함수를 선언한다. 
{
    return a - b;
}

struct Calc { //덧셈과 뺄셈 함수를 저장할 구조체를 선언한다.
    int(*fp[2])(int, int); //함수 포인터 배열로 선언하여 함수를 저장한다.
};

int executer(int(*fp)(int, int), int a, int b) //함수 포인터를 매개변수로 지정한다.
{
    return fp(a, b); //매개변수로 함수를 호출한다.
}

int (*getFunc(struct Calc *c, int index))(int, int) //함수포인터를 반환값으로 지정한다.
{                                                   //getFunc함수의 매개변수로 반환값을 설정한다.
    return c->fp[index];                            
}

int main()
{
    struct Calc c = {{add, sub}};
    
    printf("%d\n", executer(getFunc(&c, 0), 10, 20)); //각 함수의 값을 넣어 덧셈과 뺄셈함수를 호출한다.
    printf("%d\n", executer(getFunc(&c, 1), 10, 20));
    
    return 0;
}