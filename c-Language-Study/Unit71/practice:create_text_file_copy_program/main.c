#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[5] = {0, };
    int count;
    
    FILE *src = fopen("hello.txt", "r"); 
    FILE *dest = fopen("hello2.txt", "w");
    
    while (feof(src) == 0) //파일 포인터가 끝날 때까지 반복
    {
        count = fread(buffer, sizeof(char), 4, src); //count 변수에 fread 반복되는 값을 저장, NULL이 나오면 실행 안됨.
        printf("%s", buffer);
        fwrite(buffer, sizeof(char), count, dest); //fread함수로 buffer에 저장한 크기만큼 dest에 저장
        memset(buffer, 0, 5);                      //count가 있어 NULL 이후에 값은 저장안됨.
    }                                              //buffer값을 0으로 초기화

    fclose(dest);
    fclose(src);
    
    return 0;
}