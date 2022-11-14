#include <stdio.h>

void printHostname(); //반환값이 없는 printHostname함수 원형을 선언한다.
void printIPAddress(); //반환값이 없는 printIPAddress함수 원형을 선언한다.

int main()
{
    printHostname(); //printHostname함수를 호출한다.
    printIPAddress(); //printIPAddress함수를 호출한다.
    
    return 0;
}

void printHostname() //printHostname함수를 정의한다.
{
    printf("Saturn\n"); 
}

void printIPAddress() //printIPAddress함수를 정의한다.
{
    printf("192.168.10.6\n");
}