#include "libft.h"
#include "libft.h"

void ft_putnbr(int n)
{
    if (n < 0 )
    {
        ft_putchar('-');
        ft_putnbr(-n);
    }
    else if(n > 9)
    {
        ft_putnbr(n / 10);
        ft_putchar('0' + (n % 10));
    }
    else
    {
        ft_putchar('0' + n);
    }
}
