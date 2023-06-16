#include "libft.h"

int ft_strcmp(const char *str,const  char *str1) 
{
    int i = 0;
    while(str != '\0' && str1 != '\0' && str[i] == str1[i])
    {
        i++;
    }

    if (str[i] == '\0' && str1[i] == '\0')
    {
        return 0;
    }
    else
    {

    return (unsigned char)str[i] - (unsigned char)str1[i];
    }
}
