#include <stdio.h>
//1, 2, 3을 각 줄에 출력하라.
void printNumber(int count) //printNumber함수를 선언한다.
{
    if (count == 4) //count가 4가 되면 printNumber함수를 호출하지 않고 끝낸다.
    {
        return;
    }
    
    printf("%d\n", count);
    
    printNumber(++count); //함수에 값을 넣기전 count가 더해져야 하기 때문에 전위연산자를 사용한다.
}

int main()
{
    int count = 1;
    
    printNumber(count);
    
    return 0;
}