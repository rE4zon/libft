#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char *charDest = (unsigned char*)dest;
    const unsigned char *charSrc = (unsigned char*)src;

    size_t i = 0;
    while(i <= n)
    {
        charDest[i] = charSrc[i];
        if(charSrc[i] == c)
        {
            break;
        }
        i++;
    }

    return dest;
}