#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[5] = {0, };
    
    FILE *fp = fopen("words.txt", "r");
    
    fseek(fp, 7, SEEK_SET); //파일처음에서 순방향으로 7바이트 지점에서 4바이트만큼 읽는다.
    fread(buffer, 4, 1, fp);
    printf("%s", buffer); //buffer에 저장된 문자열을 출력한다.
    
    memset(buffer, 0, 5); //그 후 buffer메모리에 저장되있는 값을 초기화한다.
    
    fseek(fp, -6, SEEK_END); //파일 끝에서 역방향으로 6바이트 지점에서 2바이트만큼 읽는다.
    fread(buffer, 2, 1, fp);
    printf("%s", buffer);
    
    fclose(fp);
    
    return 0;
}