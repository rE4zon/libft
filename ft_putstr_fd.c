#include "libft.h"

void ft_putstr_fd(char *str, int fd)
{
    int i = 0;
    while(str[i] != '\0')
    {
        ft_putchar_fd(str[i], fd);
        i++;
    }
}