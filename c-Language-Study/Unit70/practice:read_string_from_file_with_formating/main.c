#include <stdio.h>

int main()
{
    char c1, c2; //문자를 저장할 변수를 선언한다.
    int x, y; //숫자를 저장할 변수를 선언한다.
    
    FILE *fp = fopen("position.txt", "r"); //fopen함수로 파일을 열어 포인터에 저장한다.
    
    fscanf(fp, "%c %d %c %d", &c1, &x, &c2, &y); //서식을 지정하여 파일에 문자열을 읽고 변수에 저장한다.
    
    printf("%d %d\n", x, y); //저장된 숫자 변수를 출력한다.
    
    fclose(fp); //파일포인터 fp는 구조체 FILE 크기만큼 동적 메모리를 할당한 것이여서 함수로 닫는다.
    
    return 0;
}