#include <stdio.h>
//enum은 열거, 목록을 뜻하는 enumeration에서 따왔다.
typedef enum _Month { //열거형은 대문자를 사용하는 경우가 많음.
    Jan = 1,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec,
    MonthCount //열거형 값의 개수를 나타내는 항목을 추가한다.
} Month;
//1 2 3 4 5 6 7 8 9 10 11 12가 출력되게 하여라.
int main()
{
    for (int i = Jan; i < MonthCount; i++) //for문을 이용해 1부터 12까지 출력되게 한다.
    {                                      //이때 선언해둔 MonthCount를 이용하며 for문을 중단한다.
        printf("%d ", i);
    }
    
    return 0;
}