#include <stdio.h>

#ifndef DEBUG //#if 조건문에 DEBUG가 정의되어 있고 ENABLE_DEBUG_MESSAGE가 정의 되어 있어야 결과를 출력한다.
#define ENABLE_DEBUG_MESSAGE //따라서 DEBUG와 ENABLE_DEBUG_MESSAGE를 매크로로 선언한다.
#endif

#include "debug.h"

int main()
{
#if defined DEBUG && defined ENABLE_DEBUG_MESSAGE
    printf("Debug: %s %s %s %d\n", __DATE__, __TIME__, __FILE__, __LINE__);
#endif

    return 0;
}