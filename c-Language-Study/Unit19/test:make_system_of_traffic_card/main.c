#include <stdio.h>

int main()
{
    int balance = 10000;
    int age;
    
    scanf("%d", &age);
    
    if (age >= 7 && age <= 12) //7세 이상 12세 이하의 조건
    {
        balance = balance - 450;
    }
    else if (age >= 13 && age <= 18) //13세 이상 18세 이하의 조건
    {
        balance = balance - 720;
    }
    else if (age >= 19) //19세 이상의 조건
    {
        balance = balance - 1200;
    }
    else //7세 미만의 조건
    {
        balance;
    }
    
    printf("%d", balance);
    
    return 0;
}