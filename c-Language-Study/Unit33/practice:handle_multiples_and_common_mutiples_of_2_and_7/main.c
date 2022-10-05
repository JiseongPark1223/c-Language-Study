#include <stdio.h>

int main()
{
    int num1, num2, i;
    
    scanf("%d %d", &num1, &num2); //두 수를 입력받는다.
    
    for (i = num1; i <= num2; i++) //두 수 사이의 모든 수가 for문에 들어가도록 한다.
    {
        if (i % 10 == 7) //나머지가 7이면 숫자의 끝자리가 7인 것이기에 continue문으로 다음 단계로 넘어간다.
        {
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}