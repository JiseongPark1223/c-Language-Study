#include <stdio.h>

int main()
{
    printf("%s %o %lld %Lf\n", "Hello, world!", 076, -2137483647ll, 4.528172L);
    //%o octal number
    //%o 8진수로 출력하는 서식지정자, 8진수로 출력할때 앞에 0을 붙히고 출력, long long 리터럴 뒤에는 ll, long double 뒤에는 L을 붙히고 출력
    return 0;
}

