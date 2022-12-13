#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getFileSize(FILE *fp) //파일의 크기를 구하는 함수
{
    int size;
    int currPos = ftell(fp);
    
    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    
    fseek(fp, 0, SEEK_SET);
    
    return size;
}

char *getData(int offset, int size, int *count, FILE *fp) //파일을 읽은 크기와 내용을 출력해주는 함수
{
    char *buffer = malloc(size + 1); //NULL값을 포함하기에 size + 1로 메모리를 할당한다.
    memset(buffer, offset, size + 1); //fread함수 사용을 위해 memset함수로 메모리를 초기화한다.
    *count = fread(buffer, sizeof(char), size, fp); //함수의 매개변수로 count의 주소값이 선언되었으므로 역참조하여 값을 저장한다.
    return buffer;
}

int main()
{
    char *buffer;
    int size;
    int count;
    
    FILE *fp = fopen("words.txt", "r");
    
    size = getFileSize(fp);
    buffer = getData(0, size, &count, fp);
    
    printf("%s\n", buffer);
    printf("%d", count);
    
    fclose(fp);
    
    free(buffer);
    
    return 0;
}