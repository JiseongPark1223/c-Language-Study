#include <stdio.h>

int getQuotientAndRemainder(int a, int b, int* remainder2)
{
    *remainder2 = a%b;
    return a/b;
}

int main()
{
    int num1;
    int num2;
    int quotient;
    int remainder1;
    
    scanf("%d %d", &num1, &num2);
    
    quotient = getQuotientAndRemainder(num1, num2, &remainder1);
    
    printf("%d %d\n", quotient, remainder1);
    
    return 0;
}