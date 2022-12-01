#include <stdio.h>
//입력된 정수에 해당하는 피보나치 수를 구하여라.
int fib(int n)
{
    if (n == 0) //피보나치 수열은 0과 1로 시작하므로 각 경우일 때는 0과 1을 출력한다.
        return 0;
    if (n == 1)
        return 1;
    
    return fib(n - 1) + fib(n - 2); //입력받은 정수에서 앞의 두 피보나치 수의 합이므로 재귀를 이용한다.
}

int main()
{
    int num1;
    scanf("%d", &num1);
    
    printf("%d\n", fib(num1));
    
    return 0;
}