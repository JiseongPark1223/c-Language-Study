#include <stdio.h>

void printIPAddress() //printIPAddress함수를 정의한다.
{
    printf("192.168.10.5\n");
}

void printHostname() //printHostname함수를 정의한다.
{
    printf("Jupiter\n"); 
}

int main()
{
    printIPAddress(); //printIPAddress함수를 호출한다.
    printHostname(); //printHostname함수를 호출한다.
    
    return 0;
}