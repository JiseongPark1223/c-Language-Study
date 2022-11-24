#include <stdio.h>

void setElements(float arr[], int count) //1차원 배열을 매개변수로 이용하는 함수를 선언한다.
{
    for(int i = 0; i < count; i++)
    {
        arr[i] = 1.2f;
    }
}

int main()
{
    float numArr[5];
    
    setElements(numArr, sizeof(numArr)/sizeof(float)); //선언한 배열과 배열의 크기를 함수에 넣는다.
    
    for(int i = 0; i < sizeof(numArr)/sizeof(float); i++) //매개변수로 배열을 선언하면 포인터로 선언한 것과 같기 때문에 함수에 의해 값이 변한다.
    {
        printf("%f ", numArr[i]); //함수로 인해 변한 값을 출력한다.
    }
    
    printf("\n");
    
    return 0;
}