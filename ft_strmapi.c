#include "libft.h"

char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
     if (s == NULL || f == NULL)
     {
        return NULL;
     }

    size_t size = ft_strlen(s);
    char *dest =  (char*)ft_strnew(size);
    if (dest == NULL)
    {
        return NULL;
    }

    size_t i = 0 ;
    while(i < size)
    {
        dest[i] = f(i, s[i]);
        i++;
    }

    dest[i] = '\0';

    return dest;
}