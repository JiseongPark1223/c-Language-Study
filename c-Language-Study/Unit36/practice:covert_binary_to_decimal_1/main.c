#include <stdio.h>

int main()
{
    int decimal = 0; 
    int binary[4] = {1, 1, 0, 1}; //이진수를 배열로 저장한다.
    
    for (int i = 0; i <= sizeof(binary)/sizeof(int) - 1; i++) //첫번째 인수부터 마지막 인수까지 for문을 진행한다.
    {
        decimal = decimal * 2 + binary[i];
    }   //10진수를 2로 나눈 나머지를 거꾸로 쓰면 이진수가 출력된다.
        //위 식을 이용하면 몫에 2를 곱하고 나머지를 순서대로더하면 십진수가 출력된다.
    printf("%d\n", decimal);
    return 0;
}
