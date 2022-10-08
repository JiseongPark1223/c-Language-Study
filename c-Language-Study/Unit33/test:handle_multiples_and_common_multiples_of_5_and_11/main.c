#include <stdio.h>

int main()
{
    int num1, num2, i;
    //5와 11의 공배수는 FizzBuzz, 5일때는 Fizz, 11일때는 Buzz를 출력한다.
    scanf("%d %d", &num1, &num2);
    
    for (i = num1; i <= num2; i++)
    {
        if (i % 5 == 0 && i % 11 == 0) //5와 11의 공배수 때 FizzBuzz를 먼저 출력한다.
        {
            printf("FizzBuzz\n");
        }
        else if (i % 5 ==0) //5의 배수 때 Fizz를 출력한다.
        {
            printf("Fizz\n");
        }
        else if (i % 11 == 0) //11의 배수 때 Buzz를 출력한다.
        {
            printf("Buzz\n");
        }
        else //이외 경우에는 숫자를 출력한다.
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
