#include <stdio.h>

int main()
{
    char name[31];
    int order;
    
    scanf("%s %d", name, &order);
    
    FILE *fp = stdout; //stdout매크로를 활용하여 화면에 문자열을 바로 출력한다.
    
    fprintf(fp, "The %dth Satellite of Jupiter: %s", order, name); //fprintf함수를 통해 서식지정자를 지정하고 파일을 출력한다.
    
    fclose(fp);
    
    return 0;
}