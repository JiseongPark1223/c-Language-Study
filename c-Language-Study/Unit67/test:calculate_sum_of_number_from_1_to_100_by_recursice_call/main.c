#include <stdio.h>
//1부터 n까지의 합을 구하여라.
int sum(int n)
{
    if (n == 1) //n이 1이면 총 합이 1이기에 1을 출력한다.
        return 1;
        
    return n + sum(n - 1); //n보다 1 작은 수를 재귀 호출을 이용하여 더한다.
}

int main()
{
    int n = 0;
    
    scanf("%d", &n);
    
    printf("%d\n", sum(n));
    
    return 0;
}