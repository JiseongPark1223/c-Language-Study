#include <stdio.h>

#define TARGET_PLATFORM 4 //TARGET_PLATFORM==PLATFORM_LINUX 조건식에 부합해야 하기에 PLATFORM_LINUX 값인 4를 TARGET_PLATFORM에 저장한다.

#define PLATFORM_UNKNOWN 0
#define PLATFORM_IOS     1
#define PLATFORM_ANDROID 2
#define PLATFORM_WIN32   3
#define PLATFORM_LINUX   4
#define PLATFORM_MAC     5

#if defined(IOS)
#define TARGET_PLATFORM PLATFORM_IOS
#endif

#if defined(ANDROID)
#define TARGET_PLATFORM PLATFORM_ANDROID
#endif

#if defined(WIN32) && defined(_WINDOWS)
#define TARGET_PLATFORM PLATFORM_WIN32
#endif

#if defined(LINUX)
#define TARGET_PLATFORM PLATFORM_LINUX
#endif

#if defined(MAC)
#define TARGET_PLATFORM PLATFORM_MAC
#endif

#if TARGET_PLATFORM == PLATFORM_LINUX
#define printf printf
#define fprint fprintf
#else
#define printf
#define fprintf
#endif

int main()
{
    printf("OS: Linux\n");
    
    return 0;
}
