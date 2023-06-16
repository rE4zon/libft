#include "libft.h"

char *ft_strndup(const char *s, size_t n)
{
    char *mem = (char*)malloc(sizeof(char) * (n + 1));
    if (mem == NULL)
    {
        return NULL;
    }

    size_t i = 0 ;
    while(i < n)
    {
        mem[i] = s[i];
        i++;
    }
    mem[i]  = '\0';
    return mem;
}