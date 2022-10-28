#include <stdio.h>
#include <stdbool.h> //bool자료형이 있는 헤더

struct Item { //Item 구조체를 선언한다.
    char name[100];
    int price;
    bool limited;
};

int main()
{
    struct Item item1 = { "베를린 필하모닉 베토벤 교향곡 전집", 10000, false };
    struct Item *ptr; //구조체 포인터 ptr을 선언한다.
    ptr = &item1; //ptr에 item1주소를 저장한다.
    
    ptr->limited = true; //ptr멤버는 item1멤버와 동일하기 때문에 limited를 true로 바꾼다.
    
    if (ptr->limited == true) //true일 때 한정판을 출력한다.
        printf("한정판\n");
    else
        printf("일반판\n");
        
    return 0;
}