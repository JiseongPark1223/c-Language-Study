#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *allocMemory() //자료형이 다른 두 포인터 변수를 하나의 함수를 이용해 사용할려면 void 형 포인터 함수를 이용한다.
{
    void *m = malloc(100); //void형 포인터 변수 m에 메모리를 할당한다.
    
    return m;
}

int main()
{
    char *name;
    float *stats;
    
    name = allocMemory(); //메모리 주소값을 name에 저장한다.
    strcpy(name, "Mercury");
    printf("%s\n", name); //name에 저장된 문자열을 출력한다.
    free(name); //malloc 함수로 할당한 메모리를 해제한다.
    
    stats = allocMemory(); //메모리 주소값을 stats에 저장한다.
    stats[0] = 87.969002; //각 배열에 알맞은 값을 저장한다.
    stats[1] = 115.877602;
    printf("%f %f\n", stats[0], stats[1]);
    free(stats); //출력후 malloc함수로 할당한 메모리를 해제한다.
    
    return 0;
}