#include "libft.h"

int static ft_countlen(int n)
{
    int count = 0;
    if(n < 0)
    {
        count++;
    }

    while(n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

 char *ft_itoa(int n)
{
    int count = ft_countlen(n);
    char *dest = ft_strnew(count);
    
    if (n < 0)
    {
        dest[0] = '-';
        n = -n;
    }

    int i = count - 1;
    while (n != 0)
    {
        dest[i] = n % 10 + '0';
        n = n / 10;
        i--;
    }

    return dest;
}  