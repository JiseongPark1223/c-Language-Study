#include <stdio.h>

void bubble_sort(int arr[], int count) //버블정렬로 오름차순으로 배열을 정렬해주는 
{
    int temp;
    
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - i - 1; j++) //이미 오름차순으로 정렬된 배열은 비교하지 않는다.
        {
            if (arr[j] > arr[j + 1]) //순서가 앞인 수의 값이 크면 바꿔준다.
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int numArr[10] = {8, 4, 2, 5, 3, 7, 10, 1, 6, 9};
    
    bubble_sort(numArr, sizeof(numArr)/sizeof(numArr[0])); //배열 전체 크기에서 요소 하나의 크기를 나누어 배열 갯수를 구한다.
    
    for (int i = 0; i < sizeof(numArr)/sizeof(numArr[0]); i++)
    {
        printf("%d ", numArr[i]);
    }
    
    return 0;
}