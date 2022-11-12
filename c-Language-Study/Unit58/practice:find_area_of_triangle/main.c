#include <stdio.h>

int main()
{
    int base = 21;
    int height = 13;
    float area;
    
    area = (float)base * height / 2; //area는 float형이므로 int형인 base를 형변환 시켜준다.
    printf("%f\n", area);
    
    return 0;
}