#include <stdio.h>

struct Dashboard { //구조체 Dashboard를 정의하고 멤버를 설정해준다.
    int speed;
    char fuel;
    float mileage;
    int engineTemp;
    int rpm;
};

int main()
{
    struct Dashboard d1; //구조체 변수 d1을 선언한다.
    
    d1.speed = 80; //각 멤버변수에 알맞은 값을 저장한 후 출력한다.
    d1.fuel = 'F';
    d1.mileage = 5821.442871f;
    d1. engineTemp = 200;
    d1.rpm = 1830;

    printf("Speed: %dkm/h\n", d1.speed);
    printf("Fuel: %c\n", d1.fuel);
    printf("Mileage: %fkm\n", d1.mileage);
    printf("Engine temp: %d°C\n", d1.engineTemp);
    printf("RPM: %d\n", d1.rpm);
    
    return 0;
}