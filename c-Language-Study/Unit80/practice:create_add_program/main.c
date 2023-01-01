#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) //옵션의 개수와 옵션 문자열을 배열로 받는다.
{
    int result = 0;
    
    for (int i = 1; i < argc; i++) 옵션의 개수만큼 반복한 뒤 배열의 값을 더한다.
    {                              0번째 배열은 실행 파일의 이름이 들어간다.
        result += atoi(argv[i]);
    }
    
    printf("%d\n", result);
    
    return 0;
}
