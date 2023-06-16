// itterate throw string if u meet a requsted character a return point it
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i = 0;
    while (s[i] != '\0')
    { 
        if(s[i] == c)
        {
            return ((char*)s + i);
        }
        i++;
    }
    if (s[i] == c)
    {
        return ((char*)s + i);
    }
    return NULL;
}