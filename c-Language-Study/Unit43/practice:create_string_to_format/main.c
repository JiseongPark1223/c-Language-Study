#include <stdio.h>

int main()
{
    char s1[20];
    
    sprintf(s1, "%d %d %d %c %d", 10, 20, 30, 'c', 99); //정수와 문자의 서식지정자에 맞추어 sprintf함수를 사용한다.
    
    printf("%s\n", s1);
    
    return 0;
}