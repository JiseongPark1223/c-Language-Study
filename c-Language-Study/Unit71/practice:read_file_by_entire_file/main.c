#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getFileSize(FILE *fp) //파일의 크기를 구하는 함수를 선언한다.
{
    int size;
    int currPos = ftell(fp); //파일의 현 포인터를 currPos에 저장
    
    fseek(fp, 0, SEEK_END);
    size = ftell(fp); //파일 포인터를 파일의 맨 끝으로 옮긴 후 크기를 저장
    
    fseek(fp, currPos, SEEK_SET); //파일 포인터를 원래의 위치로 놓는다.
    return size;
}

int main()
{
    char *buffer;
    int size;
    
    FILE *fp = fopen("hello.txt", "r");
    
    size = getFileSize(fp); //파일의 크기를 size변수에 저장
    buffer = malloc(size + 1); //NULL값을 포함해야 하므로 size + 1 정도 메모리를 할당한다.
    memset(buffer, 0, size + 1); //fread 함수를 사용해야 하기 때문에 메모리의 값을 0으로 초기화
    
    fread(buffer, size, 1, fp); //파일 포인터 fp에 있는 내용을 size크기만큼 buffer포인터 변수에 저장
    
    printf("%s\n", buffer);
    
    fclose(fp);
    
    free(buffer);
    
    return 0;
}