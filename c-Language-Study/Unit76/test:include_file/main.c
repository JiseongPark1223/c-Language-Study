#include <stdio.h>

#define printf
#define fprintf

#define MOBILE //if 조건식에 PLATFORM_ANDROID와 TARGET_PLATFORM의 값이 같아야 하므로 
#define ANDROID //MOBILE과 ANDROID를 매크로로 정의한다.
#include "platform.h"

int main()
{
    printf("OS: Android\n");
    
    return 0;
}