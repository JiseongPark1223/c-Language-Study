#include <stdio.h>

int main()
{
    int numArr[5]; //정수 다섯 개가 입력될 배열을 선언한다.
    int smallestNumber; //가장 작은 수를 저장할 변수를 선언한다.
    
    scanf("%d %d %d %d %d", &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4]); //정수 5개를 입력받는다.
    
    smallestNumber = numArr[0]; //맨 첫번째수를 임의로 가장 작은수로 설정한다.
    
    for (int i = 0; i < sizeof(numArr)/sizeof(numArr[0]); i++)
    {
        if (smallestNumber > numArr[i]) //i번째의 숫자가 가장 작은 수로 설정된 수보다 작을시 i번째 수로 가장 작은수를 바꾼다.
        {
            smallestNumber = numArr[i];
        }
    }
    
    printf("%d\n", smallestNumber);
    return 0;
}