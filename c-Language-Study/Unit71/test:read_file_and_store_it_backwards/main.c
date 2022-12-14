#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getFileSize(FILE *fp) //파일 크기를 구하는 함수
{
    int size;
    int currPos = ftell(fp);
    
    fseek(fp, 0, SEEK_END);
    
    size = ftell(fp);
    
    fseek(fp, currPos, SEEK_SET);
    
    return size;
}

int main()
{
    int size;
    
    FILE *fp = fopen("words.txt", "r");
    
    size = getFileSize(fp);
    
    char *buffer = malloc(size + 1);
    
    memset(buffer, 0 , size + 1);
    
    fread(buffer, size, 1, fp);
    
    for (int i = size - 1; i >= 0; i--) //size - 1부터 시작해야 문자열의 마지막 문자의 시작 주솟값을 표시할 수 있다.
    {
        fwrite(buffer + i, 1, 1, stdout);
    }
    
    fclose(fp);
    
    return 0;
}
