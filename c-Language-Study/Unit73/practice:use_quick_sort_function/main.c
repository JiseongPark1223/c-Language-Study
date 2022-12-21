#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) //두 값을 비교하는 compare함수를 선언한다.
{
    return strcmp((char *)a, (char *)b); //오름차순으로 정렬해야 하므로 a값이 클 때 1이 출력되어야 한다.
}                                        //또한 문자열의 형태는 char* 형이므로 형변환을 한다.

int main()
{
    char s1[10][8] = {"india", "delta", "bravo", "kilo", "alfa", "echo", "hotel", "juliett", "golf", "charlie"};
    
    qsort(s1, sizeof(s1)/sizeof(s1[0]), sizeof(s1[0]), compare); //정렬할 배열, 요소개수, 요소크기, 비교함수 순으로 qsort함수에 대입한다.
    
    for (int i = 0; i < sizeof(s1)/sizeof(s1[0]); i++)
    {
        printf("%s ", s1[i]);
    }
    
    return 0;
}