#include <stdio.h>
#include <stdbool.h>

static bool output = true;

static bool getOutputConfig() //정적 함수를 사용하면 getOutputConfig함수를 그 파일 안에서만 사용된다, 함수 사용범위를 제한한다.
{
    return output;
}

int main()
{
    if (getOutputConfig())
    {
        printf("The Little Prince\n");
    }
    
    return 0;
}