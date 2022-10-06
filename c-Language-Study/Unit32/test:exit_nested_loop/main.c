#include <stdio.h>

int main()
{
    int num1 = 0;
    //200과 300이 출력되도록 하낟.
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (num1 == 10)
            {
                goto EXIT2; //EXIT2부터 200이 출력된다.
            }
            num1++;
        }
    }

EXIT1:
    printf("100\n");
EXIT2:
    printf("200\n"); //200이 출력되고 아랫줄을 출력한다.
EXIT3:
    printf("300\n");
    
    return 0;
}