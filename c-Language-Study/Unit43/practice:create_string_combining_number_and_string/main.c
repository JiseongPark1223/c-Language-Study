#include <stdio.h>

int main()
{
    char s1[20];
    
    sprintf(s1, "%dth %s", 9, "Symphony"); //sprintf를 이용해 서식을 지정해 문자열을 생성할 수 있다.
    
    printf("%s", s1);
    
    return 0;
}