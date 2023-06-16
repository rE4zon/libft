#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
    size_t size = ft_strlen(s);
    char *dest = ft_strnew(size);

    size_t i = 0 ;
    while(i != size)
    {
        dest[i] = f(s[i]);
        i++;
    }
    
    return dest;
}