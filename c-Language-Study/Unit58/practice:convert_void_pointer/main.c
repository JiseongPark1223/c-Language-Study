#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    uint64_t *numPtr1 = malloc(sizeof(uint64_t));
    void *ptr;
    
    *numPtr1 = 12;
    
    ptr = numPtr1; //ptr은 void 형 포인터이므로 uint64_t 즉 unsigned long long포인터 형태로 형변환을 해주어야 한다.

    printf("%llu\n", *(unsigned long long *)ptr); //알맞은 포인터로 형변환을 한 후 역참조하여 바로 출력한다.
    
    free(numPtr1);
    
    return 0;
}