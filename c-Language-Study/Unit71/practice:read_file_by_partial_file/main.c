#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int readData(char *buffer, int offset, int size, FILE *fp) //파일을 읽고 정해진 크기의 내용만 출력하는 함수를 선언
{
    int count;
    
    if (feof(fp) == 1) //파일 포인터가 끝에 있으면 아무 값도 출력하지 않음
        return 0;
    fseek(fp, offset, SEEK_SET); //출력이 시작되길 원하는 위치에 파일 포인터를 위치 시킴.
    count = fread(buffer, 1, size, fp); //원하는 크기만큼 fread를 반복해 글자 수를 저장
    
    return count;
}

int main()
{
    char buffer[10] = {0, };
    int count;
    
    FILE *fp = fopen("hello.txt", "r");
    
    count = readData(buffer, 9, 3, fp);
    
    printf("%s, count: %d\n", buffer, count);
    
    fclose(fp);
    
    return 0;
}