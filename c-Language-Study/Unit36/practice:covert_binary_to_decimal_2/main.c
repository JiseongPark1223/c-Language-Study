#include <stdio.h>

int main()
{
    int decimal = 0; 
    int binary[4] = {1, 1, 0, 1}; //이진수를 선언한다.
    int position = 0; //이진수 배열의 순서를 나타내는 변수를 선언한다.
    
    for (int i = sizeof(binary)/sizeof(binary[0]) - 1; i >=0; i--) 
    {
        if(binary[i] == 1) //맨 끝 자리 수부터 이진수가 1이면 각 자릿수만큼 비트시프트를 하여 십진수 변수에 더한다.
        {                  
            decimal += 1 << position;
        }
        position++; //다음 자릿수로 이동한다.
    }
    
    printf("%d\n", decimal);
    return 0;
}