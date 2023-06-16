#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
    int i = 0;
    char *end_dest = dest + ft_strlen(dest);
    while(src[i] != '\0')
    {
        end_dest[i] = src[i];
        i++;
    }
    end_dest[i] = '\0';
    return dest;
}
