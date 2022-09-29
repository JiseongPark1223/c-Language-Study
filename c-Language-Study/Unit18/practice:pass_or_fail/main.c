#include <stdio.h>

int main()
{
    int writtenTest = 78;
    int toeic = 870;
    //필기시험 80점이상이면서 토익 850점 이상
    if (writtenTest >= 80 && toeic >= 850) //if 조건문에 특정조건을 걸어 출력한다.
    {
        printf("합격\n");
    }
    else //80점이상이면서 토익 850점 이상이 아닌 조건은 불합격을 출력한다.
    {
        printf("불합격\n");
    }
    
    return 0;
}