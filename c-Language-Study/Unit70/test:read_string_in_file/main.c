#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *buffer = malloc(100);
    memset(buffer, 0, 100); //buffer에 메모리를 할당하고 0으로 초기화한다.
    
    FILE *fp = fopen("words.txt", "r");
    
    fread(buffer, 100, 1, fp); //fread함수를 사용할 때에는 버퍼를 0으로 초기화해야한다.
                               //그 후 쓰기크기와 쓰기횟수를 순서대로 입력한다.
    printf("%s\n", buffer);
    
    fclose(fp);
    
    free(buffer);
    
    return 0;
}