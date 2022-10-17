#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s1 = malloc(sizeof(char) * 10); //포인터에 저장된 문자열은 읽기 전용이여서 문자열을 입력받을 수 없다.
                                          //따라서 malloc 함수를 이용해 문자열이 들어갈 메모리를 할당한 뒤 입력받는다.
    printf("문자열을 입력하세요: ");
    scanf("%s", s1);
    printf("%s\n", s1);
    
    free(s1); //할당된 메모리를 해제한다.
    
    return 0;
}