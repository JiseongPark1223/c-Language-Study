#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int row, col, i, j, x, y;
    
    scanf("%d %d\n", &row, &col);
    
    char **m = malloc(sizeof(char *) * (col+ 1));
    
    for (i = 0; i < col; i++)
    {
        m[i] = malloc(sizeof(char) * (row + 1));
    }

    for (i = 0; i < col; i++)
    {
      scanf("%s", m[i]);
    }
    
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            if (m[i][j] == '*')
            {
              continue;
            }
            else
            {
                m[i][j] = '0';
            }
        }
    }
    
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            if (m[i][j] == '*')
            {
                for (y = i - 1; y <= i + 1; y++)
                {
                    for (x = j - 1; x <= j + 1; x++)
                    {
                        if (y < 0 || x < 0 || y >= col || x >= row || m[x][y] == '*')
                        {
                            continue;
                        }
                        m[x][y] += 1;
                    }
                }
            }
        }
    }
    
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%c", m[i][j]);
        }
        printf("\n");
    }
    
    for (i = 0; i < col; i++)
    {
        free(m[i]);
    }
    
    free(m);
    
    return 0;
}