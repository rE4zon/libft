#include "libft.h"

char *ft_strncpy(char *dest, const char *src, size_t n)
{
    size_t i = 0;
    while(i != n)
    {
        dest[i] = src[i];
        i++;
    }
    
    return dest;
}