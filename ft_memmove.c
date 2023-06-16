#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *charDest = (unsigned char*)dest;
    const unsigned char *charSrc = (const unsigned char*)src;

    if (charSrc == charDest)
    {
        return dest;
    }

    if (charSrc < charDest)
    {
        size_t i = n;
        while (i > 0)
        {
            charDest[i - 1] = charSrc[i - 1];
            i--;
        }
    }
    else
    {
        size_t i = 0;
        while (i < n)
        {
            charDest[i] = charSrc[i];
            i++;
        }
    }

    return dest;
}