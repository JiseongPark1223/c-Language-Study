#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20] = "안녕하세요.";
    
    FILE *fp = fopen("hello.txt", "w");
    
    fputs(s1, fp);
    
    fclose(fp);
    
    return 0;
}