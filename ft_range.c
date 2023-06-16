#include "libft.h"

int *ft_range(int min, int max)
{   
    int size = max - min;
    int *result = (int *)malloc(sizeof(int) * size);
    
    if (result == NULL)
        return NULL;

    int i = 0;
    while (min + i != max - 1)
    {
        result[i] = min + i;
        i++;
    }

    return result;
}
