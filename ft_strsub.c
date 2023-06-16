#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *mem = ft_memalloc(len + 1);
    ft_strncpy(mem, &s[start], len);
    return mem;
}