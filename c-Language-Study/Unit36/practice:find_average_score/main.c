#include <stdio.h>

int main()
{   //배열로 10개의 점수를 저장한다.
    float scores[10] = {67.2f, 84.3f, 97.0f, 87.1f, 71.9f, 63.0f, 90.1f, 88.0f, 79.7f, 95.3f}; 
    float sum = 0.0f;
    float average;
    
    for (int i = 0; i < sizeof(scores) / sizeof(float); i++) //i < 10으로 하지 않는 이유는 scores배열이 바뀌면 조건도 매번 바꾸어야 하기 때문에 오류가 발생할 가능성이 높아진다.
    {                                                        //따라서 score의 전체의 크기에 자료형 크기만 나누어주어 배열 요소의 갯수를 구한다.
        sum += scores[i]; //각 학생들의 점수를 총합을 구하는 변수에 더한다.
    }
    
    average = sum / (sizeof(scores) / sizeof(float)); //총합을 배열요소의 갯수로 나누어 평균을 구한다.
    
    printf("%f\n", average);
    
    return 0;
}