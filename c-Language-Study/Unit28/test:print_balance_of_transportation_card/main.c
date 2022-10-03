#include <stdio.h>

int main()
{
    int balance;
    //1회 요금은 1200원, 잔액이 부족하면 출력을 끝낸다.
    scanf("%d", &balance); //최초의 금액을 입력받는다.
    
    while (balance >= 1200) //1200원이 1회 요금이기 때문에 1200원 이상일때까지만 while loop를 실행한다.
    {
        balance -= 1200; //잔액에서 1200원을 뺀 값을 balance에 저장한다.
        printf("%d\n", balance);
    }
    
    return 0;
}