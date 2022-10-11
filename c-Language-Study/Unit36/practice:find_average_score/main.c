#include <stdio.h>

int main()
{   //배열로 10개의 점수를 저장한다.
    float scores[10] = {67.2f, 84.3f, 97.0f, 87.1f, 71.9f, 63.0f, 90.1f, 88.0f, 79.7f, 95.3f}; 
    float sum = 0.0f;
    float average;
    
    for (int i = 0; i < sizeof(scores) / sizeof(float); i++)
    {
        sum += scores[i];
    }
    
    average = sum / (sizeof(scores) / sizeof(float));
    
    printf("%f\n", average);
    
    return 0;
}