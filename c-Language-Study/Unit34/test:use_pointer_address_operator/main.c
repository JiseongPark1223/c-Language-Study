#include <stdio.h>

int main()
{
    int *numPtr1; //numPtr1이라는 포인터 변수를 선언한다.
    int **numPtr2; //numPtr2라는 이중 포인터 변수를 선언한다. 포인터 변수가 저장된 메모리 주소값을 저장하는데 사용한다.
    int num1;
    
    scanf("%d", &num1);
    
    numPtr1 = &num1; //num1의 주소를 numPtr1에 저장한다.
    numPtr2 = &numPtr1; //numPtr1의 주소를 numPtr2에 저장한다.
    
    printf("%d\n", **numPtr2); //이중 포인터를 역참조해서 값을 출력하려면 asterisk를 두번 쓴다.
    
    return 0;
}