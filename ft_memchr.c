#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *src = (const unsigned char *)s;
    size_t i = 0;
    while (i != n)
    {
        if (src[i] == (unsigned char)c)
        {
            return (void *)&src[i];
        }
        i++;
    }
    return NULL;
}
