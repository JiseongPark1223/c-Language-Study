#include <stdio.h>

struct EncryptionHeader { //1byte 크기의 char가 있으므로 12의 약수인 4 즉 int형 변수를 2개 선언 해주면 12가 출력된다.
    char flags;
    int a;
    int b;
};
//12가 출력되도록 해라.
int main()
{
    struct EncryptionHeader header;
    
    printf("%ld\n", sizeof(header));
    
    return 0;
}