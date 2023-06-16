#include "libft.h"

int ft_strncmp(const char *str, const char *str1, size_t n)
{
    size_t i = 0;
    while(i < n && str[i] != '\0' && str1[i] != '\0' && (unsigned char)str[i] == (unsigned char)str1[i])
    {
        i++;
    }
    if(i == n)
    {
        return 0;
    }
    return (unsigned char)str[i]-(unsigned char)str1[i];
}