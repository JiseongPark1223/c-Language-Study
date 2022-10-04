#include <stdio.h>

int main()
{
    int i = 1;
    
    for (;;)
    {
        i++;
        if (i % 10 != 3)
        {
            continue;
        }
        printf("%d ", i);
        
        if (i > 103)
        {
            break;
        }
    }
    
    return 0;
}