#include <stdio.h>
//1부터 100까지의 합을 구하라.
int sum(int n) 
{
    if (n == 100)
    {
        return 100; //n이 100이 되면 100을 출력하여 함수를 중단한다.
    }
    
    return n + sum(n + 1); //재귀함수를 이용하여 1씩 증가한 값을 넣어준다.
}

int main()
{
    printf("%d\n", sum(1));
    
    return 0;
}