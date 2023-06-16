#include "libft.h"

void ft_putendl_fd(char *str, int fd)
{
    int i = 0;
    while(str[i] != '\0')
    {
        ft_putchar_fd(str[i], fd);
        i++;
    }
    ft_putchar_fd('\n',fd);
}
