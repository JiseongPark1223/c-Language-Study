#include <stdio.h>

int main()
{
    for (int i = 2, j = 5; i <= 32; i *= 2, j--) //i는 2부터 2를 곱하면서 32까지 출력하는 for loop
    {                                            //j는 5부터 1씩 감소하는 for loop
        printf("%d %d\n", i, j);
    }
    
    return 0;
}