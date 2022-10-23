#include <stdio.h>
#include <stdlib.h> 

int main()
{
    char *s1 = "97.527824"; //실수로 된 문자를 s1에 저장한다.
    float num1;
    
    num1 = atof(s1); //atof함수를 통해 문자를 실수형으로 변환한다.
    
    printf("%f\n", num1);
    
    return 0;
}