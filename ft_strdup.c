#include "libft.h"

char *ft_strdup(char *s)
{
    int len = ft_strlen(s);
    char *mem = (char*)malloc(sizeof(char) * (len + 1));
    if (mem == NULL)
    {
        return NULL;
    }

    int i = 0 ;
    while(i <= len)
    {
        mem[i] = s[i];
        i++;
    }
    
    return mem;
}