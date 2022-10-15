#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int size;
    
    scanf("%d", &size);
    
    int **m = malloc(sizeof(int *) * size);
    
    for (int i = 0; i < size; i++)
    {
        m[i] = malloc(sizeof(int) * size);
    }
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            m[i][j] = 0;
        }
    }
    
    for (int i = 0; i < size; i++)
    {
        m[i][i] = 1;
    }
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < size; i++)
    {
        free(m[i]);
    }
    
    free(m);
    return 0;
}