#include <stdio.h>

enum DEVICE_TYPE {
    DEVICE_PCI_EX = 2, //enum 함수를 이용해 열거형을 선언하였다.
    DEVICE_IEEE1394,   //열거형은 맨 처음에 숫자를 저장하면 다음 멤버변수부터는 1씩증가한 숫자가 자동으로 저장된다.
    DEVICE_USB         //따라서 2부터 시작하면 DEVICE_IEEE1394은 3이 출력된다.
};
//3이 출력되게 하여라.
int main()
{
    enum DEVICE_TYPE type;
    
    type = DEVICE_IEEE1394;
    
    printf("%d\n", type);
    
    return 0;
}