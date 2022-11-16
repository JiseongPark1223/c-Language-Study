#include <stdio.h>

long long add(long long a, long long b) //매개변수로 long long형 자료형 변수 두 개를 받고 
{                                       //두 개의 합을 반환값으로 반환하는 함수를 선언한다.
    return a + b;
}

int main()
{
    long long num1, num2;
    
    scanf("%lld %lld", &num1, &num2); //두 값을 입력받는다.
    
    printf("%lld\n", add(num1, num2)); //두 값을 함수에 넣어 실행한 후 반환값을 출력한다.
    
    return 0;
}