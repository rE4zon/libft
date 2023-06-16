#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *charDest = (unsigned char*)dest;
    const unsigned char *charSrc = (const unsigned char*)src;

    if (charDest == NULL && charSrc == NULL)
    {
        return NULL;
    }

    size_t i = 0;
    while(i < n)
    {
        charDest[i] = charSrc[i];
        i++;
    }

    return dest;
}
