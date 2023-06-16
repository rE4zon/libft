#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *chars1 = (unsigned char*)s1;
    const unsigned char *chars2 = (unsigned char*)s2;

    size_t i = 0;
    while(i != n)
    {
        if(chars1[i] != chars2[i])
        {
            return chars1[i] - chars2[i];
        }
        i++;
    }
    return 0;
}