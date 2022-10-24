#include <stdio.h>
#include <string.h>

int main()
{
    long long num; 
    int length, isPalindrome = 1; //회문이면 참이라는 의미로 1을 회문이 아니면 0을 출력한다.
    char text[30];
    
    scanf("%lld", &num); //정수를 입력받는다.
    
    sprintf(text, "%lld", num); //정수를 문자열의 형식으로 변환하여 for문 사용을 용이하게 한다.
    
    length = strlen(text); //입력받은 정수의 길이를 구한다.
    
    for (int i = 0; i < length/2; i++) 
    {
        if (text[i] != text[length - 1 - i]) //앞뒤가 같은지 아닌지 확인한다.
        {                                    //length - 1 - i가 된 이유는 문자열의 길이보다 마지막 배열을 1 작기 때문에 -1을 해준다.
            isPalindrome = 0; //앞뒤가 다르면 회문이 아니기에 0을 저장한다.
        }
    }
    
    printf("%d\n", isPalindrome);
    
    return 0;
}