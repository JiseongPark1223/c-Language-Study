#include <stdio.h>

int main()
{
    int num1;
    
    scanf("%d", &num1);
    
    printf("%d\n", num1 != 7 ? 1 : 2); //num1이 7과 다르면 조건식이 참이므로 1 같으면 2를 출력한다.
    
    return 0;
}