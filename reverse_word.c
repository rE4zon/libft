#include "libft.h"
void reverse_word(char *str)
{
    int i = ft_strlen(str) - 1;
    while(i >= 0)
    {
        ft_putchar(str[i]);
        i--;
    }
}