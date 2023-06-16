#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len = ft_strlen(s1) + ft_strlen(s2) + 1;
    char *dest = ft_memalloc(len);

    if(dest != NULL)
    {
    ft_strcpy(dest, s1);
    ft_strcpy(&dest[ft_strlen(s1)], s2);
    }
    return dest;
}