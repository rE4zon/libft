#include "libft.h"

void *ft_memset(void *s, int c, size_t len)
{   
    char *str = (char*)s;

    size_t i = 0;
    while(i < len)
    {
        str[i] = c;
        i++;
    }
    return s;
}