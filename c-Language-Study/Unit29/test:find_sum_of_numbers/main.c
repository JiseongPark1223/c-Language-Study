#include <stdio.h>

int main()
{
    unsigned int num1;
    unsigned int sum = 0;
    
    scanf("%d", &num1);
    
    unsigned int i = 0;
    do
    {
        sum += i;
        i++;
    } while (i <= num1);
    
    printf("%d\n", sum);
    
    return 0;
}